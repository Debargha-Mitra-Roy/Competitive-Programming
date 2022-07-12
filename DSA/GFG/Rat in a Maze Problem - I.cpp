/*
	Rat in a Maze Problem - I:-

	LINK:	https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

	Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
	Note: In a path, no cell can be visited more than one time.

	Example 1:
	
		Input:
		N = 4
		m[][] = {{1, 0, 0, 0},
		         {1, 1, 0, 1}, 
		         {1, 1, 0, 0},
		         {0, 1, 1, 1}}
		Output:
		DDRDRR DRDDRR
		Explanation:
		The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.
	
	Example 2:
	
		Input:
		N = 2
		m[][] = {{1, 0},
		         {1, 0}}
		Output:
		-1
		Explanation:
		No path exists and destination cell is blocked.
	
	Your Task:  
		You don't need to read input or print anything. Complete the function printPath() which takes N and 2D array m[ ][ ] as input parameters and returns the list of paths in lexicographically increasing order. 
	Note: In case of no path, return an empty list. The driver will output "-1" automatically.

	Expected Time Complexity: O((3N ^ 2)).
	Expected Auxiliary Space: O(L * X), L = length of the path, X = number of paths.
	
	Constraints:
	2 ≤ N ≤ 5
	0 ≤ m[i][j] ≤ 1

*/

#include <iostream>
#include <string.h>
#include <vector>

#define MAX 5

using namespace std;

/* Function returns true if the move taken is valid else it will return false. */
bool isSafe(int row, int col, int m[][MAX], int n, bool visited[][MAX])
{
    if (row == -1 || row == n || col == -1 || col == n || visited[row][col] || m[row][col] == 0)
        return false;

    else
        return true;
}

/* Function to print all the possible paths from (0, 0) to (n-1, n-1). */
void printPathUtil(int row, int col, int m[][MAX], int n, string &path, vector<string> &possiblePaths, bool visited[][MAX])
{
    /* This will check the initial point (i.e. (0, 0)) to start the paths. */
    if (row == -1 || row == n || col == -1 || col == n || visited[row][col] || m[row][col] == 0)
        return;

    /* If reach the last cell (n - 1, n - 1) then store the path and return */
    if (row == n - 1 && col == n - 1)
    {
        possiblePaths.push_back(path);
        return;
    }

    /* Mark the cell as visited*/
    visited[row][col] = true;

    /* Try for all the 4 directions (down, left, right, up) in the given order to get the paths in lexicographical order */

    /* Check if downward move is valid */
    if (isSafe(row + 1, col, m, n, visited))
    {
        path.push_back('D');
        printPathUtil(row + 1, col, m, n, path, possiblePaths, visited);
        path.pop_back();
    }

    /* Check if the left move is valid */
    if (isSafe(row, col - 1, m, n, visited))
    {
        path.push_back('L');
        printPathUtil(row, col - 1, m, n, path, possiblePaths, visited);
        path.pop_back();
    }

    /* Check if the right move is valid */
    if (isSafe(row, col + 1, m, n, visited))
    {
        path.push_back('R');
        printPathUtil(row, col + 1, m, n, path, possiblePaths, visited);
        path.pop_back();
    }

    /* Check if the upper move is valid */
    if (isSafe(row - 1, col, m, n, visited))
    {
        path.push_back('U');
        printPathUtil(row - 1, col, m, n, path, possiblePaths, visited);
        path.pop_back();
    }

    /* Mark the cell as unvisited for other possible paths */
    visited[row][col] = false;
}

/* Function to store and print all the valid paths */
int findPath(int m[MAX][MAX], int n)
{
    /* vector to store all the possible paths */
    vector<string> possiblePaths;
    string path;
    bool visited[n][MAX];
    memset(visited, false, sizeof(visited));

    /* Call the utility function to find the valid paths */
    printPathUtil(0, 0, m, n, path, possiblePaths, visited);

    /* Print all possible paths */
    if (possiblePaths.size() == 0)
        cout << "-1";
    else
    {
        for (int i = 0; i < possiblePaths.size(); i++)
        {
            cout << possiblePaths[i] << " ";
        }
    }
    
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;

    int m[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }

    findPath(m, n);

    return 0;
}
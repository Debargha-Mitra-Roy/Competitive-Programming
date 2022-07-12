#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int dp[20];

int find_nth_term(int n, int a, int b, int c) {

	dp[1] = a;
	dp[2] = b;
	dp[3] = c;

	// Tabulation
	for (int i = 4; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	int ans = dp[n];

	return ans;
}

int main()
{
	int n, a, b, c;
	scanf("%d %d %d %d", &n, &a, &b, &c);

	int ans = find_nth_term(n, a, b, c);

	printf("%d", ans);

	return 0;
}
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string &s, string &time) {

    int n = s.length();

    // for AM
    if (s[n - 2] == 'A')
    {
        string hh = s.substr(0, 2);

        int h = stoi(hh); // convert string to int

        if (h == 12)
        {
            string newh = "00";
            string newTime = newh.append(s.substr(2, 6));

            return newTime;
        }

        else
            return s.substr(0, n - 2);
    }

    // for PM
    else
    {
        string hh = s.substr(0, 2);

        int h = stoi(hh); // convert string to int

        if (h == 12)
            return s.substr(0, n - 2);

        int inPM = h + 12;

        string newh = to_string(inPM);
        string newTime = newh.append(s.substr(2, 6));

        return newTime;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string time;

    string result = timeConversion(s, time);

    fout << result << "\n";

    fout.close();

    return 0;
}

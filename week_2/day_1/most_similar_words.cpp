// https://codeforces.com/problemset/problem/1676/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int minDiff = INT_MAX;
        vector<string> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = 0;

                for (int k = 0; k < m; k++)
                    diff += abs(v[j][k] - v[i][k]);

                minDiff = min(minDiff, diff);
            }
        }

        cout << minDiff << endl;
    }

    return 0;
}
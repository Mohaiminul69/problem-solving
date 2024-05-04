// https://www.codechef.com/problems/MAXIMSCORE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, minVal = INT_MAX;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                minVal = abs(v[0] - v[1]);
            else if (i == n - 1)
                minVal = min(minVal, abs(v[i - 1] - v[i]));
            else
                minVal = min(minVal, max(abs(v[i - 1] - v[i]), abs(v[i] - v[i + 1])));
        }

        cout << minVal << '\n';
    }

    return 0;
}
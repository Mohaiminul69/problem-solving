// https://codeforces.com/problemset/problem/1690/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, notPossible = 0, diff = -1;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

            if (!notPossible && a[i] < b[i])
                notPossible++;

            if (!notPossible && b[i] != 0)
            {
                if (diff == -1)
                    diff = a[i] - b[i];
                else if (a[i] - b[i] != diff)
                    notPossible++;
            }
        }

        if (!notPossible && diff != -1)
            for (int i = 0; i < n; i++)
                if (b[i] == 0 && a[i] - b[i] > diff)
                    notPossible++;

        cout << ((notPossible) ? "NO" : "YES") << '\n';
    }

    return 0;
}
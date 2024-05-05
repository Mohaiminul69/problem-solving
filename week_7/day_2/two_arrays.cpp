// https://codeforces.com/problemset/problem/1589/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, notPossible = 0;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                continue;
            else if ((a[i] + 1) == b[i])
                continue;
            else
            {
                notPossible++;
                break;
            }
        }

        cout << ((notPossible) ? "No" : "Yes") << '\n';
    }

    return 0;
}
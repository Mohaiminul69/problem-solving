// https://codeforces.com/problemset/problem/1380/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, found = 0;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (!found && i > 1 && v[i - 2] < v[i - 1] && v[i - 1] > v[i])
                found++, cout << "YES" << '\n'
                              << i - 1 << " " << i << " " << i + 1 << '\n';
        }

        if (!found)
            cout << "NO" << '\n';
    }

    return 0;
}
// https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    multiset<int> mSet;

    for (int i = 0; i < n; i++)
        cin >> x, mSet.insert(x);

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        auto it = mSet.upper_bound(x);

        if (it == mSet.begin())
            cout << -1 << '\n';
        else
            cout << *--it << '\n', mSet.erase(it);
    }

    return 0;
}
// https://codeforces.com/problemset/problem/845/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r, sum = 0;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
        cin >> l >> r, mp[l]++, mp[r + 1]--;

    for (auto [idx, val] : mp)
    {
        sum += val;
        if (sum > 2)
            break;
    }

    cout << ((sum > 2) ? "NO" : "YES") << '\n';

    return 0;
}
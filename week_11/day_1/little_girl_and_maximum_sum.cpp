// https://codeforces.com/problemset/problem/276/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll ans = 0;
    int n, q, l, r;
    cin >> n >> q;
    vector<int> v(n), d(n + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (q--)
        cin >> l >> r, d[l - 1]++, d[r]--;

    for (int i = 1; i <= n; i++)
        d[i] = d[i - 1] + d[i];

    sort(v.rbegin(), v.rend());
    sort(d.rbegin(), d.rend());

    for (int i = 0; i < n; i++)
        ans += (1ll * d[i] * v[i]);

    cout << ans << '\n';

    return 0;
}
// https://codeforces.com/problemset/problem/1201/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    auto ok = [&](ll m)
    {
        ll count = 0;
        for (int i = n / 2; i < n; i++)
            count += v[i] < m ? m - v[i] : 0;
        return count <= k;
    };

    ll l = 1, r = 2e9, mid, ans;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    cout << ans << '\n';

    return 0;
}
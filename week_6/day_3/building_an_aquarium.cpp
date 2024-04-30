// https://codeforces.com/problemset/problem/1873/E

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, w, tallestCoral = INT_MIN;
        cin >> n >> w;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll l = 0, r = 1e10, ans;

        while (l <= r)
        {
            ll mid = (l + r) / 2, spaceOccupied = 0;

            for (int i = 0; i < n; i++)
                spaceOccupied += (v[i] < mid) ? v[i] : mid;

            if (((mid * n) - spaceOccupied) <= w)
                ans = mid, l = mid + 1;
            else
                r = mid - 1;
        }

        cout << ans << endl;
    }

    return 0;
}
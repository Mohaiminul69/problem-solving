// https://codeforces.com/problemset/problem/1840/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        auto ok = [&](int mid)
        {
            int l = 0, count = 1;

            for (int r = 0; r < n; r++)
                if (v[r] - v[l] > 2 * mid)
                    l = r, count++;

            return count <= 3;
        };

        int l = 0, r = 1e9, mid, ans = 0;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
                ans = mid, r = mid - 1;
            else
                l = mid + 1;
        }

        cout << ans << '\n';
    }

    return 0;
}
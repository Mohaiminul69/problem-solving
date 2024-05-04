// https://codeforces.com/problemset/problem/1593/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hole, n;
        cin >> hole >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        auto ok = [&](int mid)
        {
            long long totalDistance = 0, i = n - 1;

            while (mid--)
                totalDistance += hole - v[i], i--;

            return totalDistance < v[i + 1] + (hole - v[i + 1]);
        };

        int l = 0, r = n, mid, ans;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
                ans = mid, l = mid + 1;
            else
                r = mid - 1;
        }

        cout << ans << '\n';
    }

    return 0;
}
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        v[i] = make_tuple(t, z, y);
    }

    vector<int> can(n);

    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;

        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = v[i];
            int t, z, y, total, can, remaining, curr;
            t = get<0>(T), z = get<1>(T), y = get<2>(T);

            total = ((t * z) + y);
            can = (mid / total);
            remaining = mid % total;

            curr = ((can * z) + min(z, (remaining / t)));
            curr = min(has, curr);

            has -= curr;
            may[i] = curr;
        }

        if (!has)
            for (int i = 0; i < n; i++)
                can[i] = may[i];

        return (!has);
    };

    int l = 0, r = 1e8, mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
            ans = mid, r = mid - 1;
        else
            l = mid + 1;
    }

    cout << ans << '\n';

    for (auto val : can)
        cout << val << " ";

    cout << '\n';

    return 0;
}
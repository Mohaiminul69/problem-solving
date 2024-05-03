// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);
        for (int i = 0; i < mid; i++)
            bad[v[i]] = true;

        int j = 0;
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[j] && !bad[i + 1])
                j++;
            if (j == m)
            {
                found = true;
                break;
            }
        }

        return found;
    };

    int l = 0, r = n - 1, mid, ans;

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
// https://codeforces.com/problemset/problem/1702/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        map<ll, vector<ll>> stationMapper;

        for (ll i = 0; i < n; i++)
        {
            ll n;
            cin >> n;
            stationMapper[n].push_back(i);
        }

        while (q--)
        {
            ll s1, s2;
            cin >> s1 >> s2;

            if (!stationMapper.count(s2) || !stationMapper.count(s1))
            {
                cout << "NO" << '\n';
                continue;
            }

            if (s1 == s2)
            {
                cout << "YES" << '\n';
                continue;
            }

            if (stationMapper[s1][0] < stationMapper[s2][stationMapper[s2].size() - 1])
            {
                cout << "YES" << '\n';
                continue;
            }

            cout << "NO" << '\n';
        }
    }

    return 0;
}
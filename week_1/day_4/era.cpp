// https://codeforces.com/problemset/problem/1604/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v;

        for (ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            if (num > i + 1)
                v.push_back({num, i + 1});
        }

        ll steps = 0;

        while (v.size())
        {
            ll currSteps = v[0].first - v[0].second;
            v.erase(v.begin());
            if (currSteps >= 0)
            {
                steps += currSteps;
                for (int i = 0; i < v.size(); i++)
                    v[i].second += currSteps;
            }
        }

        cout << steps << endl;
    }

    return 0;
}
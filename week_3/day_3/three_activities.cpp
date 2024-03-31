// https://codeforces.com/problemset/problem/1914/D

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void getStatOfActivity(ll n, vector<pair<ll, ll>> &vf)
{
    for (ll i = 0; i < n; i++)
    {
        ll friendCount;
        cin >> friendCount;

        vf.push_back({friendCount, i + 1});
    }

    sort(vf.rbegin(), vf.rend());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;

        vector<pair<ll, ll>> vf1;
        vector<pair<ll, ll>> vf2;
        vector<pair<ll, ll>> vf3;

        getStatOfActivity(n, vf1);
        getStatOfActivity(n, vf2);
        getStatOfActivity(n, vf3);

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++)
                    if (vf1[i].second != vf2[j].second && vf1[i].second != vf3[k].second && vf2[j].second != vf3[k].second)
                        sum = max(sum, (vf1[i].first + vf2[j].first + vf3[k].first));

        cout << sum << endl;
    }

    return 0;
}
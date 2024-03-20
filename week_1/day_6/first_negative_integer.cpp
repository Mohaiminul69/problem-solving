// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> printFirstNegativeInteger(ll A[], ll N, ll K)
{
    ll l = 0, r = 0;
    vector<ll> v;
    queue<pair<ll, ll>> q;
    for (ll i = 0; i < N; i++)
    {
        if (A[i] < 0)
        {
            q.push({A[i], i});
        }
    }
    while (r < N)
    {
        if ((r - l + 1) == K)
        {
            ll idx = q.front().second;
            if (!q.empty() && idx < l)
            {
                q.pop();
            }
            ll val = q.front().first;
            idx = q.front().second;
            if (!q.empty() && (idx >= l && idx <= r))
            {
                v.push_back(val);
            }
            else
            {
                v.push_back(0);
            }
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    return v;
}

int main()
{
    ll t, i;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];

        ll k;
        cin >> k;

        vector<ll> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}
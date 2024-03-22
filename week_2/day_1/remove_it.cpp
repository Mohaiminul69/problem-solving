// https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v;

    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (x != a)
            v.push_back(a);
    }

    for (ll i : v)
        cout << i << " ";
    cout << '\n';

    return 0;
}
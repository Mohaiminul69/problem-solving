// https://codeforces.com/problemset/problem/621/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        sum += num;
        if (num % 2 != 0)
            v.push_back(num);
    }
    sort(v.rbegin(), v.rend());

    if (sum % 2 == 0)
        cout << sum << endl;
    else
    {
        while (sum % 2 != 0)
        {
            sum -= v[v.size() - 1];
            v.pop_back();
        }
        cout << sum << endl;
    }

    return 0;
}
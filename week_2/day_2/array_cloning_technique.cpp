// https://codeforces.com/problemset/problem/1665/B

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
        unordered_map<ll, ll> frq;
        ll mostFrequent = 0;

        for (ll i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            frq[val]++;
            mostFrequent = max(mostFrequent, frq[val]);
        }

        if (mostFrequent == n)
        {
            cout << 0 << endl;
            continue;
        }

        ll steps = 1;
        while (mostFrequent <= n)
        {
            if (mostFrequent * 2 >= n)
            {
                steps += n - mostFrequent;
                break;
            }
            steps += mostFrequent;
            mostFrequent += mostFrequent;
            steps++;
        }

        cout << steps << endl;
    }

    return 0;
}
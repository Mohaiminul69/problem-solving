// https://codeforces.com/problemset/problem/1800/C1

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
        ll n, sum = 0;
        cin >> n;
        priority_queue<ll> pq;

        for (ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;

            if (num > 0)
                pq.push(num);
            else
            {
                if (!pq.empty())
                {
                    sum += pq.top();
                    pq.pop();
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1926/E

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        for (int i = 1; i <= (log2(n) + 1); i++)
        {
            ll x = pow(2, i);
            ll y = (n + (x / 2)) / x;

            if (k <= y)
            {
                if (k == 1)
                {
                    cout << (x / 2) << '\n';
                    break;
                }
                else
                {
                    ll ans = (x / 2) + ((k - 1) * x);
                    cout << ans << '\n';
                    break;
                }
            }
            else
            {
                k -= y;
            }
        }
    }

    return 0;
}
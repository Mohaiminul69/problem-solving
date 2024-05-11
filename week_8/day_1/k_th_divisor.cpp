// https://codeforces.com/problemset/problem/762/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> divisor;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
            if (n / i != i)
                divisor.push_back(n / i);
        }
    }

    sort(divisor.begin(), divisor.end());

    cout << ((k <= divisor.size()) ? divisor[k - 1] : -1) << '\n';

    return 0;
}
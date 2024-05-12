// https://codeforces.com/problemset/problem/678/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a, ll b)
{
    return ((a / __gcd(a, b)) * b);
}

int main()
{
    ll n, a, b, p, q, overlaps, total;
    cin >> n >> a >> b >> p >> q;

    overlaps = n / lcm(a, b), total = ((n / a) * p) + ((n / b) * q) - overlaps * min(p, q);

    cout << total << endl;
    return 0;
}
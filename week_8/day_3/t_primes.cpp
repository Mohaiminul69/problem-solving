// https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e6;
vector<bool> prime(N + 1, true);

void generatePrimes()
{
    prime[1] = false;
    for (int i = 2; i * i <= N; i++)
        if (prime[i])
            for (int j = i + i; j <= N; j += i)
                prime[j] = false;
}

bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return x * x == n;
}

int main()
{
    generatePrimes();

    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
        cout << ((prime[sqrtl(v[i])] && isPerfectSquare(v[i])) ? "YES" : "NO") << '\n';

    return 0;
}
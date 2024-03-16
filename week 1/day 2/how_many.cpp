// https://atcoder.jp/contests/abc214/tasks/abc214_b

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll s, t;
    cin >> s >> t;
    ll triples = 0;

    for (ll i = 0; i <= s; i++)
        for (ll j = 0; j <= s; j++)
            for (ll k = 0; k <= s; k++)
                if ((i + j + k) <= s && (i * j * k) <= t)
                    triples++;

    cout << triples << endl;

    return 0;
}
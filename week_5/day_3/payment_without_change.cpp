// https://codeforces.com/problemset/problem/1256/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, s, changeNeeded;
        cin >> a >> b >> n >> s;

        (a * n < s) ? changeNeeded = s - a *n : changeNeeded = s % n;

        cout << ((b >= changeNeeded) ? "YES" : "NO") << '\n';
    }

    return 0;
}
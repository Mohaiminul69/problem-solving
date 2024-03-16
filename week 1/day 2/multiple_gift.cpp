// https://atcoder.jp/contests/abc083/tasks/arc088_a

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    ll ans = 0;

    while (x <= y)
    {
        x *= 2;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
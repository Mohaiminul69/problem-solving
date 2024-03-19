// https://codeforces.com/contest/1945/problem/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (b % 3 == 1 && c >= 2)
        {
            c -= 2;
            b += 2;
        }
        else if (b % 3 == 2 && c >= 1)
        {
            b++;
            c--;
        }
        if (!(b % 3 == 0))
        {
            cout << -1 << endl;
            continue;
        }
        if (c >= 3)
        {
            a += c / 3;
            c = c % 3;
        }
        if (c)
            a++;

        cout << (b / 3) + a << endl;
    }

    return 0;
}
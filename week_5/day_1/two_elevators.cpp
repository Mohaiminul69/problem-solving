// https://codeforces.com/problemset/problem/1729/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c, b = abs(b - c) + c;

        if (a < b)
            cout << 1 << '\n';
        else if (a == b)
            cout << 3 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}
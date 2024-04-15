// https://codeforces.com/problemset/problem/1763/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, orOfAll, andOfAll;
    cin >> t;
    while (t--)
    {
        cin >> n, orOfAll = 0, andOfAll = -1;

        while (n--)
            cin >> x, andOfAll &= x, orOfAll |= x;

        cout << orOfAll - andOfAll << '\n';
    }

    return 0;
}
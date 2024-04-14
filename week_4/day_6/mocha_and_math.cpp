// https://codeforces.com/problemset/problem/1559/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, andOfAll;
    cin >> t;
    while (t--)
    {
        cin >> n, andOfAll = -1;

        while (n--)
            cin >> x, andOfAll &= x;

        cout << andOfAll << '\n';
    }

    return 0;
}
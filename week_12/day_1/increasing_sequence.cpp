// https://codeforces.com/problemset/problem/1882/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, b = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> x, (x == b + 1) ? b = x + 1 : b = b + 1;

        cout << b << '\n';
    }

    return 0;
}
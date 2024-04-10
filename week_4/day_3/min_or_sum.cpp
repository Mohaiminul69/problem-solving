// https://codeforces.com/problemset/problem/1527/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, x;
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> x, ans |= x;

        cout << ans << '\n';
    }

    return 0;
}
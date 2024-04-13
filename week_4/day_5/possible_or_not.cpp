// https://www.codechef.com/problems/CS2023_PON

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, b, x, andOfAll;
    cin >> t;
    while (t--)
    {
        cin >> n >> b, andOfAll = -1;

        for (int i = 0; i < n; i++)
            cin >> x, andOfAll &= ((x & b) == b) ? x : andOfAll;

        cout << ((andOfAll == b) ? "YES" : "NO") << '\n';
    }

    return 0;
}
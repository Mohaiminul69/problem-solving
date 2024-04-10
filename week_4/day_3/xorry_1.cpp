// https://www.codechef.com/problems/XORRY1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n, b = (1 << __lg(n));

        a = b ^ n;

        cout << a << " " << b << '\n';
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1805/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, output = 0;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int xorSum = accumulate(v.begin(), v.end(), 0, bit_xor<int>());

        if (n % 2 != 0)
            cout << xorSum << '\n';
        else if (!xorSum)
            cout << xorSum << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}
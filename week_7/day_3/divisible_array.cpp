// https://codeforces.com/problemset/problem/1828/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 1;
        cin >> n;

        while (n--)
            cout << i * 2 << " ", i++;

        cout << '\n';
    }

    return 0;
}
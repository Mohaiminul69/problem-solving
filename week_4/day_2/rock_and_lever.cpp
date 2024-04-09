// https://codeforces.com/problemset/problem/1420/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[__lg(num)]++;
        }

        ll count = 0;

        for (auto [x, y] : mp)
            count += (1ll * y * (y - 1)) / 2;

        cout << count << '\n';
    }

    return 0;
}
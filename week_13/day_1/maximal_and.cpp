// https://codeforces.com/problemset/problem/1669/H

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        ll ans = 0;
        cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int i = 0; i < 31; i++)
            {
                if (x & 1)
                    mp[i]++;
                x = (x >> 1);
            }
        }

        for (int i = 30; i >= 0; i--)
        {
            int y = n - mp[i];
            if (k >= y)
            {
                ans += pow(2, i);
                k -= y;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
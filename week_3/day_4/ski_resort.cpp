// https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll r = 0, l = 0, goodDaysInARow = 0, subsetOfGoodDays = 0;

        while (r < n)
        {
            if (v[r] > q)
            {
                subsetOfGoodDays += (goodDaysInARow * (goodDaysInARow + 1)) / 2;
                goodDaysInARow = 0;
                l = r + 1;
            }

            if (r - l + 1 >= k)
            {
                goodDaysInARow = ((r - l + 1) - k) + 1;

                if (r == n - 1)
                {
                    subsetOfGoodDays += (goodDaysInARow * (goodDaysInARow + 1)) / 2;
                    goodDaysInARow = 0;
                    break;
                }
            }

            r++;
        }

        cout << subsetOfGoodDays << '\n';
    }

    return 0;
}
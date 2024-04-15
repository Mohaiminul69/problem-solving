// https://www.codechef.com/problems/BOX95

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n, xorOfAll, count;
    cin >> t;
    while (t--)
    {
        cin >> n, xorOfAll = 0, count = 0;
        vector<ll> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.rbegin(), v.rend());

        for (int i = 0; i < v.size(); i++)
        {
            if (xorOfAll < v[i])
                xorOfAll = 0, count++;
            xorOfAll ^= v[i];
        }

        cout << count << endl;
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1490/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    const int maxN = 1e4;

    vector<ll> pws;
    for (int i = 1; i <= maxN; i++)
        pws.push_back(pow(i, 3));

    int t;
    cin >> t;
    while (t--)
    {
        ll x, found = 0;
        cin >> x;

        for (int i = 0; i < maxN; i++)
        {
            if (pws[i] >= x)
                break;

            ll l = 0, r = maxN - 1, mid, need = x - pws[i];

            while (l <= r)
            {
                mid = (l + r) / 2;
                if (pws[mid] == need)
                {
                    found++;
                    break;
                }
                else if (need < pws[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }

            if (found)
                break;
        }

        cout << ((found) ? "YES" : "NO") << '\n';
    }

    return 0;
}
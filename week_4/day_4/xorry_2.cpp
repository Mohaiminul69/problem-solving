// https://www.codechef.com/problems/XORRY2

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, count = 0, x;
        bool secondOneFound = false;
        cin >> n;

        x = 1 << __lg(n);

        while (!secondOneFound && x)
        {
            x >>= 1;
            if (n & x)
                secondOneFound = true;
        }

        while (x)
        {
            if (!(n & x))
                count++;
            x >>= 1;
        }

        cout << (ll)pow(2, count) << endl;
    }

    return 0;
}
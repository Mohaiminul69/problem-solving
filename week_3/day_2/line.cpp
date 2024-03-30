// https://codeforces.com/problemset/problem/1722/D

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
        string s;
        ll n, sum = 0;
        cin >> n >> s;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                sum += i;
            if (s[i] == 'R')
                sum += n - i - 1;
        }

        ll count = 0;
        for (ll i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (s[i] == 'L')
            {
                sum -= i;
                sum += n - i - 1;
                cout << sum << " ";
                count++;
            }

            if (s[j] == 'R')
            {
                sum -= n - j - 1;
                sum += j;
                cout << sum << " ";
                count++;
            }
        }

        while (count != n)
        {
            cout << sum << " ";
            count++;
        }

        cout << '\n';
    }

    return 0;
}
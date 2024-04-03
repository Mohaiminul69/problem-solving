// https://codeforces.com/problemset/problem/1843/C

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
        ll node, sum = 0;
        cin >> node;

        while (node >= 1)
        {
            sum += node;
            node /= 2;
        }

        cout << sum << endl;
    }

    return 0;
}
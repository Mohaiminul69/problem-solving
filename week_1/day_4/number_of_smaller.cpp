// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    ll i = 0, j = 0, ans = 0;

    while (j < m)
    {
        while (a[i] < b[j] && i < n)
        {
            ans++;
            i++;
        }
        j++;
        cout << ans << " ";
    }

    cout << '\n';

    return 0;
}
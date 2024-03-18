// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

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

    ll i = 0, j = 0;
    while (i < n || j < m)
    {
        if (j == m)
        {
            cout << a[i] << " ";
            i++;
        }
        else if (i == n)
        {
            cout << b[j] << " ";
            j++;
        }
        else if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }

    return 0;
}
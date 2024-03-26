// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll s, sum = 0, n, l = 0, r = 0, count = 0;

    cin >> n >> s;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    while (r <= n)
    {
        if (sum >= s)
        {
            count += n - r + 1;
            sum -= v[l++];
        }
        else
            sum += v[r++];
    }

    cout << count << '\n';

    return 0;
}
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll s, sum = 0;
    int n, l = 0, r = 0, minLength = INT_MAX;

    cin >> n >> s;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    while (l < n)
    {
        if (r < n && sum < s)
            sum += v[r++];
        else
        {
            if (sum >= s)
                minLength = min(minLength, (r - l));
            sum -= v[l++];
        }
    }

    cout << ((minLength == INT_MAX) ? -1 : minLength) << '\n';

    return 0;
}
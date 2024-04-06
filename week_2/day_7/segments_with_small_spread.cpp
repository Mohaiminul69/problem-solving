// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    multiset<ll> ml;

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    ll r = 0, l = 0, sum = 0;

    while (r < n)
    {
        ml.insert(v[r]);
        ll mx = *ml.rbegin(), mn = *ml.begin();

        if (mx - mn <= k)
            sum += r - l + 1;

        else
        {
            while (mx - mn > k)
            {
                auto it = ml.find(v[l]);
                ml.erase(it);
                mx = *ml.rbegin(), mn = *ml.begin();
                l++;
            }
            sum += r - l + 1;
        }

        r++;
    }

    cout << sum << endl;

    return 0;
}
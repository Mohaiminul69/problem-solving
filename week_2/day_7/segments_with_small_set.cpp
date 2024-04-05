// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

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
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    ll r = 0, l = 0, sum = 0;

    while (r < n)
    {
        mp[v[r]]++;

        if (mp.size() <= k)
            sum += r - l + 1;

        else
        {
            while (mp.size() > k)
            {
                mp[v[l]]--;
                if (mp[v[l]] == 0)
                    mp.erase(v[l]);

                l++;
            }
            sum += r - l + 1;
        }
        r++;
    }
    cout << sum << endl;

    return 0;
}
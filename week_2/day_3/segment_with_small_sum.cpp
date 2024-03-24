// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll s;
    int n;
    cin >> n >> s;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll sum = 0;
    int l = 0, r = 0, maxLength = 0;

    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
            maxLength = max(maxLength, (r - l + 1));
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout << maxLength << endl;

    return 0;
}
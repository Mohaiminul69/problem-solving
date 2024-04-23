// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    while (q--)
    {
        int x, l = 0, r = n - 1, foundX = 0;
        cin >> x;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (x == v[mid])
            {
                foundX++;
                break;
            }
            else if (x < v[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

        cout << (foundX ? "YES" : "NO") << endl;
    }

    return 0;
}
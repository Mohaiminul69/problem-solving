// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, x, l, r, res, mid;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (q--)
    {
        cin >> x, l = 0, r = n - 1, res = -1;

        while (l <= r)
        {
            mid = (l + r) / 2;

            if (x > v[mid])
                res = mid, l = mid + 1;
            else
                r = mid - 1;
        }

        cout << res + 2 << '\n';
    }

    return 0;
}
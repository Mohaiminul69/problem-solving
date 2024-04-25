// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, x;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (q--)
    {
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);
        cout << it - v.begin() << endl;
    }

    return 0;
}
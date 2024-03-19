// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    ll ans = 0;
    while (i < n && j < m)
    {
        int count1 = 0, count2 = 0, current = a[i];
        while (a[i] == current && i < n)
        {
            count1++;
            i++;
        }

        while (b[j] < current && j < m)
            j++;

        while (b[j] == current && j < m)
        {
            count2++;
            j++;
        }
        ans += (1LL * count1 * count2);
    }

    cout << ans << endl;

    return 0;
}
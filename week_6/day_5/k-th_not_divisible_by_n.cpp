// https://codeforces.com/problemset/problem/1352/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l = 0, r = 2e9, mid, ans;
        cin >> n >> k;

        while (l <= r)
            mid = l + (r - l) / 2, ((mid - (mid / n) >= k)) ? ans = mid, r = mid - 1 : l = mid + 1;

        cout << ans << '\n';
    }

    return 0;
}
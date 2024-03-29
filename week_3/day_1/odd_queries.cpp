// https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q, sum = 0;
        cin >> n >> q;
        int arr[n + 1];
        arr[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            arr[i] = sum;
        }

        while (q--)
        {
            int l, r, k, rest, newSum;
            cin >> l >> r >> k;

            rest = sum - arr[r] + arr[l - 1];
            newSum = ((r - l) + 1) * k;

            cout << (((rest + newSum) % 2 != 0) ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
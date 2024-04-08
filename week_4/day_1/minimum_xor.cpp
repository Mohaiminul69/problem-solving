// https://www.codechef.com/problems/MINMXOR

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
        int n, XOR = 0, minXOR;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i], XOR ^= v[i];

        minXOR = XOR;

        for (int i = 0; i < n; i++)
            minXOR = min(minXOR, (XOR ^ v[i]));

        cout << minXOR << endl;
    }

    return 0;
}
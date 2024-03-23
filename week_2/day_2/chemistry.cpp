// https://codeforces.com/problemset/problem/1883/B

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
        int n, k;
        cin >> n >> k;
        vector<int> frq(26);

        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            frq[ch - 'a']++;
        }

        int numberOffOdds = -1;

        for (int i : frq)
            if (i % 2 != 0)
                numberOffOdds++;

        cout << ((numberOffOdds <= k) ? "YES" : "NO") << endl;
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1692/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int duplicateCount = 0;

        const int N = 1e4 + 5;
        int frq[N];
        memset(frq, 0, sizeof(frq));

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (!frq[val])
                frq[val]++;
            else
                duplicateCount++;
        }

        int isOdd = duplicateCount % 2 != 0;

        cout << (isOdd ? (n - duplicateCount - 1) : n - duplicateCount) << endl;
    }

    return 0;
}
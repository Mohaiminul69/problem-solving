// https://codeforces.com/problemset/problem/1790/C

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
        int n;
        cin >> n;
        vector<int> arr[n];
        vector<int> frq(n + 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int num;
                cin >> num;

                if (j == n - 2)
                    frq[num]++;

                arr[i].push_back(num);
            }
        }

        int mostOccuredOnLastIndex, leastOccuredOnLastIndex;

        for (int i = 0; i < n + 1; i++)
        {
            if (frq[i] == 1)
                leastOccuredOnLastIndex = i;

            if (frq[i] == n - 1)
                mostOccuredOnLastIndex = i;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i][n - 2] == leastOccuredOnLastIndex)
            {
                for (int j : arr[i])
                    cout << j << " ";
                cout << mostOccuredOnLastIndex << '\n';

                break;
            }
        }
    }

    return 0;
}
// https://codeforces.com/problemset/problem/467/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, friendCount = 0;
    cin >> n >> m >> k;
    vector<vector<int>> masks(m + 1);

    for (int i = 0; i <= m; i++)
    {
        int player;
        cin >> player;

        for (int j = 0; j < n; j++)
        {
            if ((player >> j) & 1)
                masks[i].push_back(1);
            else
                masks[i].push_back(0);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
            if (masks[m][j] != masks[i][j])
                count++;

        if (count <= k)
            friendCount++;
    }

    cout << friendCount << '\n';

    return 0;
}
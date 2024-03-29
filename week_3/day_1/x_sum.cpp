// https://codeforces.com/problemset/problem/1676/D

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[201][201];

int getAttackPoints(int x, int y)
{
    int i, j;
    int res = arr[x][y];
    vector<pair<int, int>> dir = {{1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

    for (pair<int, int> dr : dir)
    {
        i = x + dr.first, j = y + dr.second;

        while (i >= 0 && i < n && j >= 0 && j < m)
        {
            res += arr[i][j];
            i += dr.first, j += dr.second;
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        int maxAttackPoints = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                maxAttackPoints = max(maxAttackPoints, getAttackPoints(i, j));

        cout << maxAttackPoints << '\n';
    }

    return 0;
}
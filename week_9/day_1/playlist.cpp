// https://cses.fi/problemset/task/1141

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l = 0, uniqueSongs = 0;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    for (int r = 0; r < n; r++)
    {
        cin >> v[r], mp[v[r]]++;

        if (mp[v[r]] > 1)
        {
            while (mp[v[r]] > 1)
                mp[v[l]]--, l++;
        }
        else
            uniqueSongs = max(uniqueSongs, r - l + 1);
    }

    cout << uniqueSongs << endl;

    return 0;
}
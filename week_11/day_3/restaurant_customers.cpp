// https://cses.fi/problemset/task/1619

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, l, count = 0, maxCount = INT_MIN;
    cin >> n;
    map<int, int> mp;

    while (n--)
        cin >> a >> l, mp[a]++, mp[l]--;

    for (auto [key, val] : mp)
        count += val, maxCount = max(maxCount, count);

    cout << maxCount << '\n';

    return 0;
}
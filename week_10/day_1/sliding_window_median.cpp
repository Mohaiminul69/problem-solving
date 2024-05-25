// https://cses.fi/problemset/task/1076

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n, k, l = 0, r = 0, median;
    cin >> n >> k;

    vector<int> v(n);
    pbds<pair<int, int>> p;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (r < n)
    {
        p.insert({v[r], r});

        if (r - l + 1 == k)
        {
            median = (k % 2 == 0) ? k / 2 - 1 : median = k / 2;

            auto it = p.find_by_order(median);
            cout << it->first << " ";

            p.erase({v[l], l});
            l++;
        }

        r++;
    }

    return 0;
}
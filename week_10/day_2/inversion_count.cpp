// https://www.spoj.com/problems/INVCNT/en/

#include <bits/stdc++.h>
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll count = 0;
        cin >> n;
        vector<int> v(n);
        pbds<int> p;

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = n - 1; i >= 0; i--)
            count += p.order_of_key(v[i]), p.insert(v[i]);

        cout << count << '\n';
    }

    return 0;
}
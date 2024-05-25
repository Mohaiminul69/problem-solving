// https://codeforces.com/problemset/problem/600/B

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n, m, x;
    cin >> n >> m;
    pbds<int> p;

    while (n--)
        cin >> x, p.insert(x);

    while (m--)
        cin >> x, cout << p.order_of_key(x + 1) << " ";

    cout << '\n';

    return 0;
}
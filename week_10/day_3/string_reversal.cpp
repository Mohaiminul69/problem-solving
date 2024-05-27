// https://codeforces.com/problemset/problem/1430/E

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
    int n;
    string s, r;
    cin >> n >> s, r = s;

    reverse(r.begin(), r.end());

    map<char, vector<int>> posS, posR;

    for (int i = 0; i < n; i++)
    {
        posS[s[i]].push_back(i);
        posR[r[i]].push_back(i);
    }

    vector<int> permutation(n);

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < posS[ch].size(); i++)
        {
            permutation[posR[ch][i]] = posS[ch][i];
        }
    }

    pbds<int> p;
    ll count = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        count += p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }

    cout << count << endl;

    return 0;
}
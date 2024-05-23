// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, diff;
    ll a, b, steps = 0;

    cin >> n >> a, n--;

    while (n--)
        cin >> b, (a > b) ? steps += a - b : a = b;

    cout << steps << endl;

    return 0;
}
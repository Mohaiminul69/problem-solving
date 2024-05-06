// https://codeforces.com/problemset/problem/805/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    char charMapper[] = {'a', 'a', 'b', 'b'};

    while (n--)
        cout << charMapper[i], i++, (i == 4) ? i = 0 : i = i;

    return 0;
}
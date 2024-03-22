// https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int count = 0;

    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= n; ++j)
            if ((x - (i + j)) >= 0 && (x - (i + j)) <= n)
                count++;

    cout << count << endl;

    return 0;
}
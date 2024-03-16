// https://atcoder.jp/contests/abc220/tasks/abc220_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; c * i <= b; i++)
    {
        if (c * i >= a && c * i <= b)
        {
            cout << c * i << "\n";
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
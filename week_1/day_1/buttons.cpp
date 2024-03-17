// https://atcoder.jp/contests/abc124/tasks/abc124_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int both = a + b;
    int aTwice = a + (a - 1);
    int bTwice = b + (b - 1);

    int maxOfSame = max(aTwice, bTwice);

    cout << max(both, maxOfSame) << endl;

    return 0;
}
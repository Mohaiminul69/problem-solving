// https://codeforces.com/problemset/problem/633/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    int loopCount1 = c / a;
    int loopCount2 = c / b;

    for (int i = 0; i <= loopCount1; i++)
    {
        for (int j = 0; j <= loopCount2; j++)
        {
            if (a * i + b * j == c)
            {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
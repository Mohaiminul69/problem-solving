// https://www.codechef.com/problems/PERMOR

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = n; i > 0; i--)
            cout << i << " ";

        cout << '\n';
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1729/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s, d = "";
        cin >> s;

        while (n--)
        {
            if (s[n] != '0')
                d += 'a' + s[n] - '0' - 1;
            else
                d += 'a' + stoi(s.substr(n - 2, 2)) - 1, n -= 2;
        }

        reverse(d.begin(), d.end());

        cout << d << endl;
    }

    return 0;
}
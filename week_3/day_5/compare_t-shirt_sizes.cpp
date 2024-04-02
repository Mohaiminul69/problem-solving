// https://codeforces.com/problemset/problem/1741/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        int xTracker1 = 0, xTracker2 = 0;
        char ch1, ch2;
        map<char, int> sizeMapper = {
            {'S', 1},
            {'M', 2},
            {'L', 3},
        };

        while (s[xTracker1] == 'X')
            xTracker1++;

        ch1 = s[xTracker1];

        int r = xTracker1 + 2;
        while (s[r] == 'X')
            r++;

        ch2 = s[r];
        xTracker2 = r - (xTracker1 + 2);

        int leftShirt = (ch1 == 'S') ? sizeMapper[ch1] - xTracker1 : sizeMapper[ch1] + xTracker1;
        int rightShirt = (ch2 == 'S') ? sizeMapper[ch2] - xTracker2 : sizeMapper[ch2] + xTracker2;

        if (leftShirt == rightShirt)
            cout << "=" << '\n';
        else if (leftShirt < rightShirt)
            cout << "<" << '\n';
        else
            cout << ">" << '\n';
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1832/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int multiOccuredChar = 0;
        cin >> s;
        map<char, int> frq;

        for (int i = 0; i < s.length(); i++)
        {
            frq[s[i]]++;
            if (frq[s[i]] == 2)
                multiOccuredChar++;
        }

        cout << ((multiOccuredChar > 1) ? "YES" : "NO") << '\n';
    }

    return 0;
}
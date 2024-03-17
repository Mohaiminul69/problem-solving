// https://codeforces.com/problemset/problem/1744/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int getTimeOfNextG(int i, vector<int> ag, int n)
{
    int firstIndexOfG = ag.front();
    int lastIndexOfG = ag.back();

    if (i < firstIndexOfG)
        return firstIndexOfG - i;

    if (i > lastIndexOfG)
        return n - i + firstIndexOfG;

    for (int j : ag)
    {
        if (j > i)
            return j - i;
    }
    return 0;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        char c;
        cin >> n;
        cin >> c;
        string s;
        cin >> s;

        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> ac, ag;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != c && s[i] != 'g')
                continue;
            if (s[i] == c)
                ac.push_back(i);
            if (s[i] == 'g')
                ag.push_back(i);
        }

        int maxTime = 0;
        for (int i : ac)
        {
            maxTime = max(maxTime, getTimeOfNextG(i, ag, n));
        }
        cout << maxTime << endl;
    }

    return 0;
}
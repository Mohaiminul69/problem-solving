// https://codeforces.com/problemset/problem/1800/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n < 4)
        {
            cout << "NO" << endl;
            continue;
        }

        queue<char> meowQ;
        for (char c : {'m', 'e', 'o', 'w'})
            meowQ.push(c);

        bool isCat = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != meowQ.front() && s[i] != (char)toupper(meowQ.front()))
            {
                if (i == 0)
                {
                    isCat = false;
                    break;
                }

                meowQ.pop();
                if (meowQ.empty())
                {
                    isCat = false;
                    break;
                }

                if (s[i] != meowQ.front() && s[i] != (char)toupper(meowQ.front()))
                {
                    isCat = false;
                    break;
                }
            }
        }

        if (isCat && meowQ.size() == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1722/A

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
        string s;
        cin >> s;
        bool correctSpelling = true;
        unordered_map<char, int> spellingMapper = {
            {'T', 1},
            {'i', 1},
            {'m', 1},
            {'u', 1},
            {'r', 1},
        };

        for (int i = 0; i < s.length(); i++)
        {
            if (!spellingMapper[s[i]])
            {
                cout << "No" << endl;
                correctSpelling = false;
                break;
            }
            else
                spellingMapper[s[i]]++;
        }

        if (correctSpelling)
            for (auto i = spellingMapper.begin(); i != spellingMapper.end(); i++)
            {
                if (i->second != 2)
                {
                    cout << "No" << endl;
                    correctSpelling = false;
                    break;
                }
            }

        if (correctSpelling)
            cout << "Yes" << endl;
    }

    return 0;
}
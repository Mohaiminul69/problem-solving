// https://codeforces.com/problemset/problem/1703/D

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
        unordered_map<string, int> stringMapper;
        vector<string> vs(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vs[i];

            if (!stringMapper.count(vs[i]))
                stringMapper.insert({vs[i], 0});
        }

        for (auto &elem : stringMapper)
        {
            string str = elem.first;

            for (int i = 1; i < str.length(); i++)
            {
                string s1 = str.substr(0, i);
                string s2 = str.substr(i, str.length() - 1);

                if (stringMapper.count(s1) && stringMapper.count(s2))
                {
                    elem.second = 1;
                    break;
                }
            }
        }

        for (string s : vs)
            cout << stringMapper[s];

        cout << '\n';
    }

    return 0;
}
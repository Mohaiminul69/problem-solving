// https://codeforces.com/problemset/problem/1374/C

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
        vector<char> v;

        for (int i = 0; i < n; i++)
        {
            char br;
            cin >> br;

            if (br == ')')
            {
                if (!v.empty() && v[v.size() - 1] == '(')
                {
                    v.pop_back();
                    continue;
                }
            }

            v.push_back(br);
        }

        cout << v.size() / 2 << endl;
    }

    return 0;
}
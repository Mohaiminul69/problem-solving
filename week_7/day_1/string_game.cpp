// https://www.codechef.com/problems/STRAME

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        string s;
        cin >> n >> s;

        for (int i = 0; i < s.size(); i++)
            if (i != 0 && s[i - 1] != s[i])
                s.erase(i - 1, 2), count++, i -= 2;

        cout << ((count % 2 != 0) ? "Zlatan" : "Ramos") << '\n';
    }

    return 0;
}
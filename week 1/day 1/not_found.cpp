// https://atcoder.jp/contests/abc071/tasks/abc071_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int i = 97;
    while (i != 123)
    {
        if (s.find(char(i)) == string::npos)
        {
            cout << char(i) << endl;
            return 0;
        }
        i++;
    }

    cout << "None" << endl;
    return 0;
}
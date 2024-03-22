// https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int count = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        char c;
        cin >> c;
        if (c != s1[i])
            count++;
    }

    cout << count << endl;

    return 0;
}
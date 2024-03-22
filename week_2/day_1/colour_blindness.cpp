// https://codeforces.com/problemset/problem/1722/B

#include <bits/stdc++.h>
using namespace std;

void getRowInput(int size, vector<char> &v)
{
    for (int i = 0; i < size; i++)
    {
        char ch;
        cin >> ch;
        if (ch == 'G' || ch == 'B')
            v[i] = 'B';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v1(n), v2(n);

        getRowInput(n, v1);
        getRowInput(n, v2);

        cout << ((v1 == v2) ? "Yes" : "No") << endl;
    }

    return 0;
}
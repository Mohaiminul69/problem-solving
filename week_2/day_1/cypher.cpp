// https://codeforces.com/problemset/problem/1703/C

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
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int currentNumber;
            cin >> currentNumber;
            v.push_back(currentNumber);
        }

        for (int i = 0; i < v.size(); i++)
        {
            int spinTime;
            cin >> spinTime;
            string s;
            cin >> s;

            for (int j = 0; j < s.length(); j++)
            {
                (s[j] == 'D') ? v[i]++ : v[i]--;
                (v[i] >= 10) ? v[i] -= 10 : v[i];
                (v[i] < 0) ? v[i] += 10 : v[i];
            }
        }

        for (int i : v)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}
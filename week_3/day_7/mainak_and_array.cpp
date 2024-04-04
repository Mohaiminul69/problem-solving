// https://codeforces.com/problemset/problem/1726/A

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
        int n, fisrtVal, lastVal, comparator = 0;
        cin >> n;
        vector<int> v;
        priority_queue<int, vector<int>, greater<int>> pqf;
        priority_queue<int> pqb;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (i == 0 || i == n - 1)
            {
                if (i == 0)
                {
                    pqf.push(num);
                    fisrtVal = num;
                }
                else
                {
                    pqb.push(num);
                    lastVal = num;
                }
            }
            else
            {
                pqf.push(num);
                pqb.push(num);
            }
            v.push_back(num);
        }

        for (int i = 1; i < n; i++)
            comparator = max(comparator, v[i - 1] - v[i]);

        if (pqb.empty())
            cout << 0 << endl;
        else
            cout << max(max(pqb.top() - fisrtVal, lastVal - pqf.top()), comparator) << endl;
    }

    return 0;
}
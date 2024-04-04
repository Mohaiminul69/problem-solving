// https://codeforces.com/problemset/problem/1714/B

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
        int n, count = 0;
        cin >> n;
        vector<int> v;
        map<int, int> frq;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        for (int i = n - 1; i >= 0; i--)
        {
            frq[v[i]]++;
            if (frq[v[i]] > 1)
            {
                count = i + 1;
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
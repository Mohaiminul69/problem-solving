// https://www.codechef.com/problems/ALTTAB

#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(const pair<string, int> &a, const pair<string, int> &b)
    {
        return a.second < b.second;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    map<string, int> tabMapper;
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        tabMapper[s] = i + 1;
    }

    for (auto i : tabMapper)
        pq.push({i.first, i.second});

    while (!pq.empty())
    {
        cout << pq.top().first.substr(pq.top().first.length() - 2);
        pq.pop();
    }

    return 0;
}
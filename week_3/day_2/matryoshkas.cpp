// https://codeforces.com/problemset/problem/1790/D

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
        int n, setCount = 0;
        cin >> n;
        map<int, int> mapper;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mapper[num]++;
        }

        while (!mapper.empty())
        {
            setCount++;
            int key = mapper.begin()->first;

            while (mapper[key])
            {
                mapper[key]--;

                if (!mapper[key])
                    mapper.erase(key);

                if (mapper.count(key + 1))
                    key++;
                else
                    break;
            }
        }

        cout << setCount << endl;
    }

    return 0;
}
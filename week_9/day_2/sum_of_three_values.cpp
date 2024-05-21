// https://cses.fi/problemset/task/1641

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first, v[i].second = i + 1;

    sort(v.begin(), v.end());

    for (int locked = 0; locked < n - 2; locked++)
    {
        int front = locked + 1, rear = n - 1;

        while (front < rear)
        {
            int sum = v[locked].first + v[front].first + v[rear].first;

            if (sum == x)
            {
                cout << v[locked].second << " " << v[front].second << " " << v[rear].second;
                return 0;
            }

            (sum < x) ? front++ : rear--;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}

// https://codeforces.com/problemset/problem/1791/E

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, sum = 0;
        cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> pos;
        priority_queue<ll> neg;

        for (int i = 0; i < n; i++)
            cin >> x, (x >= 0) ? pos.push(x) : neg.push(x);

        if (neg.size() % 2 == 0)
            while (!neg.empty())
                sum += abs(neg.top()), neg.pop();
        else
        {
            if (!pos.empty())
            {
                int copyOfSum = sum;
                copyOfSum -= pos.top(), copyOfSum += abs(neg.top());

                if (copyOfSum > sum)
                    sum = copyOfSum, pos.pop(), neg.pop();
                else
                    sum += neg.top(), neg.pop();
            }
            else
                sum += neg.top(), neg.pop();

            while (!neg.empty())
                sum += abs(neg.top()), neg.pop();
        }

        while (!pos.empty())
            sum += pos.top(), pos.pop();

        cout << sum << '\n';
    }

    return 0;
}
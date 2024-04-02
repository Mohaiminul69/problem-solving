// https://codeforces.com/problemset/problem/1843/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, counter = 0, i = 0, num;
        cin >> n;

        while (i < n)
        {
            cin >> num;
            sum += abs(num);
            if (num < 0)
            {
                counter++;
                while (i < n - 1)
                {
                    if (num > 0)
                        break;

                    cin >> num;
                    sum += abs(num);
                    i++;
                }
            }

            i++;
        }
        cout << sum << " " << counter << endl;
    }

    return 0;
}
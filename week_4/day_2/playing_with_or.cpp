// https://www.codechef.com/problems/FIZZBUZZ2304

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int r = 0, l = 0, oddCount = 0, count = 0;

        while (r < n)
        {
            if (v[r] % 2 != 0)
                oddCount++;

            if (r - l + 1 == k)
            {
                if (oddCount)
                    count++;
                if (v[l] % 2 != 0)
                    oddCount--;
                l++;
            }
            r++;
        }

        cout << count << '\n';
    }

    return 0;
}
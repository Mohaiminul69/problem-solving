// https://codeforces.com/problemset/problem/1610/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPalindrome(const vector<int> &v, int valueToSkip)
{
    int left = 0, right = v.size() - 1;

    while (left < right)
    {
        if (v[left] == valueToSkip)
            left++;
        else if (v[right] == valueToSkip)
            right--;
        else if (v[left] != v[right])
            return false;
        else
            left++, right--;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        bool foundPalindrome = true;

        for (int i = 0; i < n / 2; i++)
        {
            if (v[i] != v[n - 1 - i])
            {
                if (isPalindrome(v, v[i]) || isPalindrome(v, v[n - 1 - i]))
                    foundPalindrome = true;
                else
                    foundPalindrome = false;
                break;
            }
        }

        cout << (foundPalindrome ? "YES" : "NO") << '\n';
    }

    return 0;
}
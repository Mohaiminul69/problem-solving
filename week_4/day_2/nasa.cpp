// https://www.codechef.com/problems/PALIXOR

#include <bits/stdc++.h>
using namespace std;

const int maxN = (1 << 15);
vector<int> palindromeMapper;

void makePalindromes()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool isPalindrome = true;

        for (int i = 0; i < len / 2; i++)
        {
            if (s[i] != s[len - i - 1])
            {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome)
            palindromeMapper.push_back(i);
    }
}

int main()
{
    makePalindromes();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> frq(maxN), v;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            frq[num]++;
            v.push_back(num);
        }

        long long count = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindromeMapper.size(); j++)
            {
                int curr = v[i] ^ palindromeMapper[j];
                count += frq[curr];
            }
        }

        cout << count / 2 << '\n';
    }

    return 0;
}
// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    map<char, int> mp;

    int r = 0, l = 0, maxLen = -1;

    while (r < s.length())
    {
        mp[s[r]]++;
        if (mp.size() == k)
            maxLen = max(maxLen, r - l + 1);

        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                    mp.erase(s[l]);
                l++;
            }

            maxLen = max(maxLen, r - l + 1);
        }

        r++;
    }

    cout << maxLen << endl;

    return 0;
}
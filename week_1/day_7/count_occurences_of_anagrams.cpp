// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int search(string pat, string txt)
{
    int count = 0;
    int k = pat.length();
    vector<int> fq1(26, 0), fq2(26, 0);

    for (char c : pat)
        fq1[c - 'a']++;

    int l = 0, r = 0;
    while (r < txt.length())
    {
        fq2[txt[r] - 'a']++;

        if ((r - l + 1) == k)
        {
            if (fq1 == fq2)
                count++;

            fq2[txt[l] - 'a']--;
            l++;
            r++;
        }
        else
            r++;
    }

    return count;
}

int main()
{
    string txt = "forxxorfxdofr";
    string pat = "for";
    cout << search(pat, txt) << endl;

    return 0;
}
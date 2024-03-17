// https://codeforces.com/problemset/problem/1722/C

#include <bits/stdc++.h>
using namespace std;

int printScore(string s, map<string, int> m)
{
    string word;
    stringstream iss(s);
    int score = 0;

    while (iss >> word)
        score += m[word];

    return score;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2, s3;
        cin.ignore();
        getline(cin, s1);
        getline(cin, s2);
        getline(cin, s3);
        string s4 = s1 + ' ' + s2 + ' ' + s3;
        string arr[] = {s1, s2, s3};
        string word;
        stringstream iss(s4);
        map<string, int> mapper;

        while (iss >> word)
        {
            if (mapper.find(word) == mapper.end())
                mapper.insert({word, 3});
            else
            {
                if (mapper[word] == 1)
                    mapper[word] = 0;
                else
                    mapper[word] = 1;
            }
        }

        int i = 0;
        while (i < 3)
        {
            cout << printScore(arr[i], mapper) << " ";
            i++;
        }
        cout << endl;
    }

    return 0;
}
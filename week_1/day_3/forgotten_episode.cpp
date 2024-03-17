// https://codeforces.com/problemset/problem/440/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfEpisodes;
    int missingEpisode;
    cin >> numberOfEpisodes;
    vector<int> v;

    for (int i = 0; i < numberOfEpisodes - 1; i++)
    {
        int episode;
        cin >> episode;
        v.push_back(episode);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (i == v[i] - 1)
            missingEpisode = v[i] + 1;
        else
            break;
    }

    cout << missingEpisode << endl;

    return 0;
}
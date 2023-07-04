#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v;
    int n,count=0;
    cin >> n;
    int home, away;
    for (int i = 0; i < n; i++)
    {
        cin >> home >> away;
        v.emplace_back(home,away);
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[j].first == v[i].second)
            {
                count++;
            }
        }
    }
    cout << count;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fasto()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    Fasto();
    int count = 0;
    int arr[26] = { 0 };
    bool flag = 1;
    int n, m, x;
    char temp;
    cin >> n >> m >> x;
    vector<pair<int, int>> shifts;
    vector<vector<char>> mtrx;
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            if (temp == 'S')
            {
                shifts.push_back({ i,j });
            }
            else
            {
                arr[tolower(temp)-97] = 1;
            }
            v.push_back(temp);
        }
        mtrx.push_back(v);
        v.clear();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mtrx[i][j] != 'S')
            {
                for (int k = 0; k < shifts.size(); k++)
                {
                    float di, dj;
                    di = shifts[k].first - i;
                    dj= shifts[k].second - j;
                    if (sqrt(di * di + dj * dj) <= x)
                    {
                        arr[tolower(mtrx[i][j]) - 97] = 2;
                    }
                    else
                    {
                        if (arr[tolower(mtrx[i][j]) - 97] != 2)
                        {
                            arr[tolower(mtrx[i][j]) - 97] = 3;
                        }
                    }
                }
            }
        }
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (!islower(temp) && arr[tolower(temp) - 97] == 3)
        {
            count++;
        }
        else if (!islower(temp) && arr[tolower(temp) - 97] == 1)
        {
            flag = 0;
        }
        else if (arr[tolower(temp) - 97] == 0)
        {
            flag = 0;
        }
    }
    if (!flag)
    {
        cout << -1;
    }
    else
    {
        cout << count;
    }
}


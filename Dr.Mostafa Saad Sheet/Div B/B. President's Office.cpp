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
    int n, m;
    cin >> n >> m;
    char c, temp;
    cin >> c;
    int cnt = 0;
    vector<vector<char>> mtrx;
    vector<char> v(m+2,'.');
    mtrx.push_back(v);
    v.clear();
    for (int i = 0; i < n; i++)
    {
        v.push_back('.');
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        v.push_back('.');
        mtrx.push_back(v);
        v.clear();
    }
    vector<char> l(m + 2, '.');
    mtrx.push_back(l);
    set<char> st;
    st.insert(c);
    st.insert('.');
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (mtrx[i][j] == c)
            {
                st.insert(mtrx[i][j - 1]);
                st.insert(mtrx[i][j + 1]);
                st.insert(mtrx[i - 1][j]);
                st.insert(mtrx[i + 1][j]);
            }
        }
    }
    cout << st.size()-2;
}


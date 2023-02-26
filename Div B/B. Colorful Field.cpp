#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
void Fasto()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    Fasto();
    string arr[3] = { "Grapes", "Carrots", "Kiwis" };
    set<int> s;
    ll n, m, k, t,x,y,p;
    cin >> n >> m >> k >> t;
    vector<int> w;
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        x--;
        w.push_back(x * m + y);
        s.insert(x * m + y);
    }
    sort(all(w));
    for (int i = 0; i < t; i++)
    {
        cin >> x >>  y;
        x--;
        y;
        auto it=s.find(x * m + y);
        if (it == s.end())
        {
            p = lower_bound(all(w), x * m + y) - w.begin();
            cout << arr[(x * m + y - p) % 3] << endl;
        }
        else
        {
            cout << "Waste" << endl;
        }
    }
}


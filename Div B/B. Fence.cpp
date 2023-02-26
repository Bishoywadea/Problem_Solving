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
    ll mn = 100000000;
    int index;
    ll n, temp, k, sum = 0;
    vector<ll> result;
    vector<ll> s;
    cin >> n >> k;
    s.push_back(0);
    for (int i = 0; i < k-1; i++)
    {
        cin >> temp;
        sum += temp;
        s.push_back(sum);
    }
    for (int i = k-1; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        s.push_back(sum);
        if ((sum - s[i - k+1]) < mn)
        {
            mn = (sum - s[i - k+1]);
            index = i - k+2;
        }
    }
    cout << index;
}


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
    ll n;
    cin >> n;
    ll temp;
    ll sum = 0;
    vector<ll> numbers;
    numbers.push_back(0);
    vector<ll> sumunsorted;
    sumunsorted.push_back(0);
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        sumunsorted.push_back(sum);
        numbers.push_back(temp);
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 1; i < n + 1; i++)
    {
        numbers[i] += numbers[i - 1];
    }
    ll m, t, l, r;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t >> l >> r;
        if (t == 1)
        {
            cout << sumunsorted[r] - sumunsorted[l - 1] << endl;
        }
        else
        {
            cout << numbers[r] - numbers[l - 1] << endl;
        }
    }
}


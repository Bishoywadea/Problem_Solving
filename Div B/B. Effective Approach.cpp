#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll sasha = 0, petya = 0;
	map<ll, ll> mp;
	ll n, temp;
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> temp;
		mp.insert({ temp,i + 1 });
	}
	ll m;
	cin >> m;
	for (ll i = 0; i < m; i++)
	{
		cin >> temp;
		sasha += mp[temp];
		petya += n + 1 - mp[temp];
	}
	cout << sasha << " " << petya;
}


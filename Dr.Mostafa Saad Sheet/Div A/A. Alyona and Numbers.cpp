
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
	ll n, m, count = 0;
	cin >> n >> m;
	vector<int> v;
	if (n < m)
	{
		for (int i = 1; i <= n; i++)
		{
			count += (m + i) / 5 - (i / 5);
		}
	}
	else
	{
		for (int i = 1; i <= m; i++)
		{
			count += (n + i) / 5 - (i / 5);
		}
	}
	cout << count;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int h, n, dh, bonus;
	cin >> h >> n;
	multimap<int, int> mp;
	while (n--)
	{
		cin >> dh >> bonus;
		mp.insert({ dh, bonus });
	}
	for (auto it : mp)
	{
		if (it.first >= h)
		{
			cout << "NO";
			return 0;
		}
		else
		{
			h += it.second;
		}
	}
	cout << "YES";
}
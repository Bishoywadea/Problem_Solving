#include<bits/stdc++.h>
using namespace std;

int main()
{
	multimap<int, int, greater<int>> m;
	int n,t;
	int key, value;
	cin >> n >> t;
	int carry = n, cost = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> key >> value;
		m.insert({ value,key });
	}
	for (auto it : m)
	{
		if (carry>0)
		{
			if (it.second > carry)
			{
				cost += carry * it.first;
				carry = 0;
			}
			else
			{
				cost += it.second * it.first;
				carry -= it.second;
			}
		}
		else
		{
			break;
		}
	}
	cout << cost;
}

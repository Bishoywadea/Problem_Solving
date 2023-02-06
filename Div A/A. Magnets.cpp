#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, position, last, groups = 0;
	cin >> n >> position;
	last = position;
	groups++;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> position;
		if (position != last)
		{
			last = position;
			groups++;
		}
	}
	cout << groups;
}
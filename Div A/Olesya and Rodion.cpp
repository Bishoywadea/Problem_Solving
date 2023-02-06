#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	if (n==1 && k==10)
	{
		cout << -1;
	}
	else if (k == 10)
	{
		cout << 1;
		for (int i = 0; i < n-1; i++)
		{
			cout << 0;
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << k;
		}
	}
	
}
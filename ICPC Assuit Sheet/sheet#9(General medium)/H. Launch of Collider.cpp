#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	bool flag = false;
	int mini=9999999999;
	cin >> n;
	char* dir = new char[n];
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin>>dir[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		if (dir[i] == 'R' && dir[i + 1] == 'L')
		{
			if (mini > (arr[i + 1] - arr[i]) / 2)
			{
				mini = (arr[i + 1] - arr[i]) / 2;
				flag = true;
			}
		}
	}
	if (!flag)
	{
		cout << -1;
	}
	else
	{
		cout << mini;
	}
}
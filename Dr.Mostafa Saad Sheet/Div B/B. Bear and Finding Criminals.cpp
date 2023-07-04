#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,count=0;
	cin >> n>>a;
	a--;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (arr[a] == 1)
	{
		count++;
	}
	for (int i = 1; i < n; i++)
	{
		if(a-i>=0 && a+i<n)
		{
			if (arr[i + a] == 1 && arr[a-i] ==1)
			{
				count+=2;
			}
		}
		else if (a - i < 0)
		{
			if (arr[i + a] == 1 )
			{
				count += 1;
			}
		}
		else
		{
			if (arr[a-i] == 1)
			{
				count += 1;
			}
		}
	}
	cout << count;
}
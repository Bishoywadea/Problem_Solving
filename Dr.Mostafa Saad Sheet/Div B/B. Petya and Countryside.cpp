#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int max = 1;
	int high;
	for (int i = 0; i < n; i++)
	{
		int count = 1;
		high = arr[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] <= high)
			{
				count++;
				high = arr[j];
			}
			else
			{
				break;
			}
		}
		high = arr[i];
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] <= high)
			{
				count++;
				high = arr[j];
			}
			else
			{
				break;
			}
		}
		if (count > max)
		{
			max = count;
		}
	}
	cout << max;
}

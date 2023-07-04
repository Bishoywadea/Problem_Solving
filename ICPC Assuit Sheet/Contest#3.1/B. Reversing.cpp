#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int lastZero;
	int n;
	cin >> n;
	long long* arr = new long long[n];
	long long* result = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i]==0)
		{
			for (int j=0 ,k=i-1 ;j<i,k>=0 ; j++,k--)
			{
				result[j] = arr[k];
			}
			result[i] = 0;
			for (int j = 0; j <= i; j++)
			{
				arr[j] = result[j];
			}
			lastZero = i;
		}
	}
	for (int i = lastZero+1; i <n ; i++)
	{
		result[i] = arr[i];
	}
	for (int z = 0; z < n; z++)
	{
		cout << result[z] << " ";
	}
	cout << endl;
	
	
	delete[] arr;
	delete[] result;
}

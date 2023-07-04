#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	long long sum=0;
	long long* arr = new long long[n] ();
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = n-1; i > n-1-k; i--)
	{
		if ((sum + arr[i]) > sum) { sum = sum + arr[i]; }
		else
		{
			break;
		}
	}
	cout << sum;
	delete[] arr;
}

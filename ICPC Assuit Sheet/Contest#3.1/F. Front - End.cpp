#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long* arr = new long long[n];
	for (long long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (long long i = 0, k=n-1; i < n/2,k>=n/2; i++,k--)
	{
		if(i!=k){ cout << arr[i] << " " << arr[k] << " "; }
		else
		{
			cout << arr[i];
		}
	}
}

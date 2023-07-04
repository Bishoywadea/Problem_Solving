#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void evenPrinter(long long arr[],int size)
{
	if (size == -1 || size== -2) {}
	else{
		cout << arr[size] << " ";
		evenPrinter(arr, size - 2);
	}
}

int main()
{
	int n;
	cin >> n;
	long long arr[1005];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (n%2==0)
	{
		evenPrinter(arr, n-2);
	}
	else
	{
		evenPrinter(arr, n-1);
	}
	
}
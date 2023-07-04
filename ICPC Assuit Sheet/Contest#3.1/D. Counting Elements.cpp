#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n, repeted = 1, total = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n - 1; i++)
	{
		while (arr[i] == arr[i + 1]) { repeted++; i++;  }
		if (arr[i + 1] - arr[i] == 1)
		{
			total += repeted;
		}
		repeted = 1;

	}
	cout << total;
}

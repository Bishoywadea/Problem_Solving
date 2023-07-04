#include <iostream>
using namespace std;

void sorting(long long arr[], int n) {
	long long temp;
	for (int i = n - 1; i > 0; i--)
	{
		for (int k = 0; k < n - 1; k++)
		{
			if (arr[k] > arr[k + 1]) {
				temp = arr[k + 1];
				arr[k + 1] = arr[k];
				arr[k] = temp;
			}
		}
	}
}

int main() {
	int n;
	bool flag = true;
	cin >> n;
	long long* arr1 = new long long[n];
	long long* arr2= new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	sorting(arr1, n);
	sorting(arr2, n);
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != arr2[i]) { flag=false; break; }
		else{}
	}
	if (flag) { cout << "yes"; }
	else { cout << "no"; }


	delete[] arr1;
	delete[] arr2;
}

#include<iostream>
#include<algorithm>
using namespace std;

void printer(long arr1[], long arr2[],int n) {

	for (int i = 0; i < n; i++)
	{
		cout << arr2[i]<<" ";
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i] << " ";
	}

}

int main()
{
    int n;
	cin >> n;
	long * arr1 = new long[n];
	long* arr2 = new long[n];
	/*long arr1[1000];
	long arr2[1000];*/
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	printer(arr1, arr2, n);
	delete[] arr1;
	delete[] arr2;
	return 0;
}

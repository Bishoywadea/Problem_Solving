#include<iostream>
#include<algorithm>
using namespace std;

void theShifter(int arr[], int n) {
	for (int i = n-1; i >= 0; i--)
	{
		if(arr[i]==0)
		{
			for (int j = i; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[n - 1] = 0;
		}
		else{}
	}
}


int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	theShifter(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout<<  arr[i]<<" ";
	}

}

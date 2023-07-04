#include <iostream>
using namespace std;

void maxFinder(int arr[], int size) {
	int max = arr[0];
	int indexmax = 0;
	int min = arr[0];
	int indexmin = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
			indexmax = i;
		}
		else if (arr[i] < min)
		{
			min = arr[i];
			indexmin = i;
		}
	}
	arr[indexmax] = min;
	arr[indexmin] = max;
}


int main() {
		int n;                                                         
		cin >> n;
		int * arr = new int[n];
		for (int i = 0; i < n; i++)                                    
		{
			cin >> arr[i];
		}
		maxFinder(arr, n);
		for (int i = 0; i < n; i++)                                    
		{
			cout << arr[i];
		}
		delete[] arr;
}
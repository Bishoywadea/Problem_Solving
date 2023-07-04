#include <iostream>
using namespace std;

int main() {
	long long n1, n2;
	cin >> n1 >> n2;
	long long* arr1 = new long long[n1];
	long long* arr2 = new long long[n2];
	for (int i = 0; i < n1; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < n2; i++)
	{
		cin >> arr2[i];
	}
	long long index = 0;
	int count = 0;
	for (int i = 0; i < n2; i++)
	{
		for (int j = index; j < n1; j++) {
			if (arr1[j]==arr2[i])
			{
				index = j + 1;
				count=count+1;
				break;
			}
			else
			{
			}
			
		}
	}
	if (count == n2) { cout << "YES"; }
	else
	{
		cout << "NO";
	}
	delete[] arr1;
	delete[] arr2;
}

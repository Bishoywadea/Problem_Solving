#include <iostream>
using namespace std;

int main() {
	int n,min=9999,temp;
	cin >> n;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
	{
		temp = 0;
		cin >> arr[i];
		while (arr[i]%2==0 )
		{
			arr[i] = arr[i] / 2;
			temp++;
		}
		if (temp < min) { min = temp; }
	}
	cout << min;
}
#include <iostream>
using namespace std;

int main() {
	
	long long n , q;
	long long n1, n2;
	cin >> n >> q;
	long long* arr = new long long[n];
	long long* sum = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sum[0] = arr[0];
	for (long long i = 1; i < n ; i++)
	{
		sum[i] = arr[i] + sum[i - 1];
	}

	for (int i = 0; i < q; i++)
	{
		cin >> n1 >> n2;
		if (n1 == 1) { cout << sum[n2-1]<<"\n"; }
		else { cout << sum[n2 - 1] - sum[n1 - 2]<<endl; }
	}
	delete[] arr;
}

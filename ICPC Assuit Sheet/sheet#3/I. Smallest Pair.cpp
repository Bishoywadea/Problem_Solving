#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
	for (int z = 0; z < t; z++)
	{
		int n;
		bool flag=true;
		cin >> n;
		long long* arr = new long long[n];
		long long* ij = new long long[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long min,min2;
		min = arr[0] + arr[1]+(2)-(1);
		for (int i = 0; i < n; i++)
		{
			for (int k = i+1; k < n; k++) {
				
					if (min > (arr[i] + arr[k] + (k+1)-(i+1) )) { min = (arr[i] + arr[k] + (k + 1) - (i + 1)); }
			}
		}
		cout << min<<endl;
	}
}
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int q = 0; q < t; q++)
	{
		long long even = 0, odd = 0;
		long long n;
		cin >> n;
		long long* arr = new long long[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 0) { even++; }
			else { odd++; }
		}
		if (n % 2 == 0) { cout << abs(even-odd)/2<<endl; }
		else
		{
			cout << -1 << endl;
		}
	}

}

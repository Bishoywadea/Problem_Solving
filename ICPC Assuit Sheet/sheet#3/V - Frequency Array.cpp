#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long long n, q;
	cin >> n >> q;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	long long count2 = 0;
	long long count1 = 0;
	for (int i = 1; i <= q; i++)
	{
		
		for (int j = count1; j < n; j++)
		{
			if (i==arr[j])
			{
				count1++;
			}
			else { break; }
		}
		cout << count1-count2 << endl;
		count2 = count1;
	}
}

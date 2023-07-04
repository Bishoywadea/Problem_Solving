#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	bool flag = false;
	long long index = 0;
	long long n, k;
	long long count = 0;
	cin >> n >> k;
	long long* arr = new long long[n];
	long long* result = new long long[ceil(float(n) / k)];
	long long* sub = new long long[k];
	for (long long i = 0; i < n - (n % k); i++)
	{
		cin >> arr[i];
		sub[count] = arr[i];
		if (count == k - 1)
		{
			sort(sub, sub + count + 1);
			result[index] = sub[0];
			index++;
			count = 0;
		}
		else
		{
			count++;
		}


	}
	for (long long i = n - (n % k); i < n; i++)
	{
		cin >> sub[i - (n - (n % k))];
		flag = true;
	}
	if (flag) { sort(sub, sub + (n % k));  result[index] = sub[0]; }

	for (int i = 0; i < ceil(float(n) / k); i++)
	{
		cout << result[i] << " ";
	}

	delete arr;
	delete result;
	delete sub;
}

//////////////ANOTHER SHORTER SOLUTION////////////////

/*
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	long long index = 0;
	long long* arr = new long long[k];
	for (int i = 0; i < n - (n % k); i++)
	{
		cin >> arr[index];
		if (index == k - 1)
		{
			sort(arr, arr + k);
			cout << arr[0] << " ";
			index = 0;
		}
		else { index++; }
	}
	index = 0;
	for (int i = 0; i < n % k; i++)
	{
		cin >> arr[index];
		if (index == (n % k) - 1)
		{
			sort(arr, arr + index + 1);
			cout << arr[0] << " ";
		}
		else { index++; }
	}
	delete[] arr;
}*/
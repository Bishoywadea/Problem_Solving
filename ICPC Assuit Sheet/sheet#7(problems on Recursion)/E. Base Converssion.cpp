#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int binary[10000] = { 0 };

int baseConverter(long long n)
{
	int index = 0;
	while (n > 0)
	{
		binary[index] = n % 2;
		n /= 2;
		index++;
	}
	return index;
}

int main()
{
	long t;
	long long n;
	cin >> t;
	for (long i = 0; i < t; i++)
	{
		int index = 0;
		cin >> n;
		baseConverter(n);
		for (int i = baseConverter(n) - 1; i >= 0; i--)
		{
			cout << binary[i];
		}
		cout << endl;
	}
}
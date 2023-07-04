#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	long n;
	double factor=1;
	int digits=1;
	cin >> n;
	for (long i = 2; i <= n; i++)
	{
		factor *= i;
		while (factor>=10)
		{
			factor /= 10;
			digits++;
		}
	}
	cout << "Number of digits of "<<n<<"! is "<<digits;
}
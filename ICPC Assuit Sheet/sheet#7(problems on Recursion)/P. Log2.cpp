#include <iostream>
#include<algorithm>
using namespace std;

void powerFinder(long long int n, long counter)
{
	if(n>1)
	{
		n /= 2;
		counter++;
		powerFinder(n, counter);
	}
	else
	{
		cout << counter;
	}
}

int main()
{
	long long int n;
	long counter = 0;
	cin >> n;
	powerFinder(n, counter);
}



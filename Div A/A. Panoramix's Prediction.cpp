#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	for (int i = 2; i <=ceil(n/2) ; i++)
	{
		if (n % i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n, m;
	cin >> n >> m;
	if (isPrime(m))
	{
		for (int i = n+1; i <m ; i++)
		{
			if (isPrime(i))
			{
				cout << "NO";
				return 0;
			}
		}
		cout << "YES";
		return 0;
	}
	cout << "NO";
}
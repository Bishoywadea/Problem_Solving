#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isprime(int n)
{
	if(n==1||n==0)
	{
		return 0;
	}
	else
	{
		for (int i=2; i <= sqrt(n); i++)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	if (isprime(n))
	{
		for (int i = n+1; i <=m; i++)
		{
			if (isprime(i))
			{
				if (i == m)
				{
					cout << "YES";
					return 0;
				}
				else
				{
					cout << "NO";
					return 0;
				}
			}
		}
		cout << "NO";
	}
	else
	{
		cout << "NO";
	}
}
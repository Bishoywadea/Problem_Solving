#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

bool isPrime(long long n)
{
	if (n != 1 && n != 0)
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0) { return 0; }
		}
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int main()
{
	long long n;
	cin >> n;
	int result[1000]={0};
	int index = 0,frequancy=0;
	for (int i = 2; i <= n/2; i++)
	{
		if(isPrime(i))
		{
			if (n % i == 0)
			{
				result[index] = i;
				index++;
				n = n / i;
				i = 1;
			}
		}
		if (isPrime(n)) { result[index] = n; index++; break; }
		else{}
	}
	sort(result, result + index);
	for (int i = 0; i < index; i++)
	{
		if (result[i] == result[i + 1]) { frequancy++; }
		else
		{
			frequancy++;
			cout << "(" << result[i] << "^" << frequancy << ")";
			frequancy = 0;
			if (i != index - 1) { cout << "*"; }
		}
		
	}
}
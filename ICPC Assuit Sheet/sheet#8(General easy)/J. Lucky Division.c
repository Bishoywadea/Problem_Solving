#include <stdio.h>

int isLucky(int i)
{
	while (i>0)
	{
		if (i % 10 == 4 || i % 10 == 7) { i /= 10; }
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n= 6546643;
	scanf_s("%d", &n);
	if (isLucky(n)) { printf("YES"); return 0; }
	else
	{
		for (int i = 4; i <= n/2; i++)
		{
			if (isLucky(i) && n%i==0)
			{
				printf("YES"); return 0;
			}
		}
	}
	printf("NO"); return 0;
	
}
//##another solution using C++
/* 
#include<iostream>
using namespace std;

bool isLucky(int i)
{
	while (i>0)
	{
		if (i % 10 == 4 || i % 10 == 7) { i /= 10; }
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	if (isLucky(n)) { cout << "YES"; return 0; }
	else
	{
		for (int i = 4; i < n; i++)
		{
			if (isLucky(i) && n%i==0)
			{
				cout << "YES"; return 0;
			}
		}
	}
	cout << "NO"; return 0;

}

*/

#include<stdio.h>


int main()
{
	int n,position,last,groups=0;
	scanf_s("%d", &n);
	scanf_s("%d", &position);
	last = position;
	groups++;
	for (int i = 0; i < n-1; i++)
	{
		scanf_s("%d", &position);
		if(position!=last)
		{
			last = position;
			groups++;
		}
	}
	printf("%d",groups);
}

//## another solution using C++
/*
#include<iostream>
using namespace std;
int main()
{
	int n,position,last,groups=0;
	cin>>n>>position;
	last = position;
	groups++;
	for (int i = 0; i < n-1; i++)
	{
		cin>>position;
		if(position!=last)
		{
			last = position;
			groups++;
		}
	}
	cout<<groups;
}
*/

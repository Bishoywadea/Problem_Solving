#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, b, d,a;
	cin >> n >> b >> d;
	int count = 0;
	int capacity=d;
	while (n--)
	{
		cin >> a;
		if (a > b) 
		{
		}
		else
		{
			capacity -= a;
			if (capacity < 0)
			{
				count++;
				capacity = d;
			}
		}
	}
	cout << count;

}
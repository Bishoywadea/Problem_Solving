#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, b, d,orange,waste=0,count=0;
	cin >> n >> b >> d;
	for (int i = 0; i < n; i++)
	{
		cin >> orange;
		if (orange <= b)
		{
			waste += orange;
			if (waste > d)
			{
				waste = 0;
				count++;
			}
		}
		
	}
	cout <<count;
}
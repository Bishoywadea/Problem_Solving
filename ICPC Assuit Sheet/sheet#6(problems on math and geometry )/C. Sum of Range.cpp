#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main()
{
	long long a, b,small,large,sum,even,odd;
	cin >> a >> b;
	small = min(a, b);
	large = max(a, b);
	sum = ((large - small+1) * (large +small))/2;
	if(small%2==0 && large%2==0)
	{
		even = (((large - small) / 2) + 1) * (large + small)/2;
		odd = sum - even;
	}
	else if(small%2!=0 && large%2!=0)
	{
		odd = (((large - small) / 2) + 1) * (large + small) / 2;
		even = sum - odd;
	}
	else if (small % 2 == 0 && large % 2 != 0)
	{
		even = (((large-1 - small) / 2) + 1) * (large-1 + small) / 2;
		odd = sum - even;
	}
	else
	{
		even = (((large - small+1) / 2)) * (large  + small+1) / 2;
		odd = sum - even;
	}
	cout << sum << "\n" << even << "\n" << odd;
}

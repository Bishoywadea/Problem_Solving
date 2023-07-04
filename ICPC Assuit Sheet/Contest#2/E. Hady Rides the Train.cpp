#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long r, col;
	r = n / 4;
	if (r%2==0)
	{
		col = n % 4;
	}
	else
	{
		col = abs((n % 4) - 3);
	}
	cout << r << " " << col;

}

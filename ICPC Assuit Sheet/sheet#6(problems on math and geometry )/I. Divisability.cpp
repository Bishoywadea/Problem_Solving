#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long a, b, x,sum=0;
	cin >> a >> b >> x;
	if(a<b){
		a = ceil((double(a) / x))*x;
		b = b - (b % x);
		sum = ((((b - a) / x) + 1) * (b + a)) / 2;
	}
	else
	{
		b = ceil((double(b) / x)) * x;
		a = a - (a % x);
		sum = ((((a - b) / x) + 1) * (b + a)) / 2;
	}
	cout << sum;
}
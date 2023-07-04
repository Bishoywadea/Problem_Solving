#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main()
{
	long long a, b, q;
	cin >> a >> b >> q;
	if (q % 3 == 1) { cout << a; }
	else if (q % 3 == 2) { cout << b; }
	else
	{
		cout << (a ^ b) ;
	}
}

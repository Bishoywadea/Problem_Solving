#include <iostream>
#include <math.h>
using namespace std;

long long factorial(int n) {
	long long facto=1;
	for (int i = 2; i <= n; i++)
	{
		facto *= i;
	}
	return facto;
}

int main()
{
	int n, r;
	cin >> n >> r;
	long long factn, factr,factd;
	factn = factorial(n);
	factd = factorial(n - r);
	factr = factorial(r);
	cout << factn / (factd * factr) << " " << factn / factd;
	
}
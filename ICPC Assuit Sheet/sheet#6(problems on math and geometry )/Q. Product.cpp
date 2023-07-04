#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	long long n1, n2, m;
	long long facto = 1;
	long long numberoftimes;
	cin >> n1 >> n2 >> m;
	for (long long i = n1; i <= n2; i++)
	{
		facto *= i;
		facto %= m;
	}
	cout << facto;
}
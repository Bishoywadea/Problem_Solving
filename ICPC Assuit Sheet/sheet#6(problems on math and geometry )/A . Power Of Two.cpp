#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	if (log2(n) - int(log2(n)) == 0) { cout << "YES"; }
	else
	{
		cout << "NO";
	}
}

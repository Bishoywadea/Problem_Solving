#include <iostream>
using namespace std;

int main()
{
	long double n1, n2 ,n3,n4;
	cin >> n1 >> n2 >> n3 >> n4;
	if (n2 == n4 && n1 > n3) { cout << "YES"; }
	else if (n2 == n4 && n1 < n3) { cout << "NO"; }
	else if ((pow(n1, (n2 / 1e12)) - pow(n3, (n4 / 1e12))) > 0) { cout << "YES"; }
	else
	{
		cout << "NO";
	}
}
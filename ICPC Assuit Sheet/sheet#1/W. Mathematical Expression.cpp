#include <iostream>
using namespace std;

int main()
{
	int n1, n2 ,n3;
	char c1 ,c2;
	cin >> n1 >> c1  >> n2 >>c2>>n3;


	if (c1 == '+') {
		if ((n1 + n2) == n3){cout << "Yes";}
		else { cout << n1 + n2; }
	}
	else if (c1 == '-') {
		if ((n1 - n2) == n3) { cout << "Yes"; }
		else { cout << n1 - n2; }
	}
	else
	{
		if ((n1 * n2) == n3) { cout << "Yes"; }
		else { cout << n1 * n2; }
	}
}
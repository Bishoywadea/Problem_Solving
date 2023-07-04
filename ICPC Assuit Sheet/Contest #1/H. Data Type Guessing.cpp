#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	long long prod = (n1 * n2) / n3;
	if ((n1 * n2)%n3==0)
	{
		if (prod> 2147483647)
		{
			cout << "long long";
		}
		else { cout << "int"; }
	}
	else
	{
		cout << "double";
	}
}
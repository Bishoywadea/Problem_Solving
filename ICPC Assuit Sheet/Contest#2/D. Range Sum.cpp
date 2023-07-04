#include <iostream>
using namespace std;

int main() {
	long long t;
	long long n1, n2;
	cin >> t;
	for (long long i = 0; i < t; i++)
	{
		long long sum = 0;
		cin >> n1 >> n2;
		sum = ((abs(n2 - n1) + 1) * (n1 + n2) / 2);
		cout << sum <<endl;
	}
}
#include <iostream>
using namespace std;

int main() {
	long long n, temp1 = 0, temp2 = 1, c;
	cin >> n;
	if (n == 1) { cout << "0 "; }
	else if (n == 2) { cout << "1 "; }
	else {
		for (int i = 3; i <= n; i++)
		{

			c = temp1 + temp2;
			if (i == n) { cout << c; }
			else{
				temp1 = temp2;
				temp2 = c;
			}
			


		}
	}
}
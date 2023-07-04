#include<iostream>
#include<algorithm>
using namespace std;
long long GCD(long long num1, long long num2) {
	while (num2 != 0) {
		long long temp = num1;
		num1 = num2;
		num2 = temp % num1;
	}
	return num1;
}

int main() {
	long long num1, num2,gcd;
	cin >> num1 >> num2;
	gcd = GCD(num1, num2);
	cout << gcd << " " <<(num1*num2)/gcd ;
}
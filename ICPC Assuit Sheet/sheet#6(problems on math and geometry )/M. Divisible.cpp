#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string num1;
	int num2;
	cin >> num1 >> num2;
	long long res = 0;
	for (long long i = 0; i < num1.size(); i++) {
		res *= 10;
		res += num1[i] - 48;
		res %= num2;
	}
	if (res == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
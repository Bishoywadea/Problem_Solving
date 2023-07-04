#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int d1, d2;
	d1 = n % 10;
	d2 = (n / 10) % 10;
	if (d1 % d2 == 0 || d2 % d1 == 0) { cout << "YES"; }
	else { cout << "NO"; }
}
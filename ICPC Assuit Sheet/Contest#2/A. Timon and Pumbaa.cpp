#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	long long n1, n2;
	cin >> n1 >> n2;
	if ((n1 - n2) >= 0) { cout << n1 - n2; }
	else {
		cout << 0;
	}
}
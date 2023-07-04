#include<iostream>
using namespace std;
int main() {

	char c;
	cin >> c;
	int n = int(c);
	if (n >= 65 && n <= 90) { n = n + 32; }
	else
	{
		n = n - 32;
	}
	
	c = n;
	cout << c;
}
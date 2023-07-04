#include <iostream>
using namespace std;

int main()
{
	const int pin = 1999;
	long long n;

	while (1)
	{
		cin >> n;
		if (n == pin) {
			cout << "Correct" << endl;
			break; }
		else { cout << "Wrong" << endl; }
	}
}

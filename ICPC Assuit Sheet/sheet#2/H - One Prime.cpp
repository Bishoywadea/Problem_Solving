#include <iostream>
using namespace std;

int main()
{
	long long x;
	 int count = 0;
	cin >> x;

	if (x == 0 || x == 1) { cout << "NO"; }
	else {
		for (int i = 1; i <= x/2; i++)
		{
			if (x % i == 0) {
				count++;
			}
			else
			{

			}
		}
		if (count == 1) { cout << "YES"; }
		else { cout << "NO"; }
	}

}

#include <iostream>
using namespace std;
void factorial(int temp) {
	long long factorial = 1;

	if (temp == 0) { cout << 1 << endl; }
	else
	{
		for (int i = 1; i <= temp; i++)
		{
			factorial = factorial * i;
		}
		cout << factorial << endl;
	}
}

int main()
{
	int n, temp;
	cin >> n;
	int array[15];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		factorial(array[i]);
	}
}

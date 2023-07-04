#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int nlines;
	cin >> nlines;
	for (int i = 1; i <= nlines; i++)
	{
		for (int k = 1; k <= nlines-i; k++)
		{
			cout << " ";
		}
		for (int c = 0; c < ((2 * i)-1); c++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = nlines; i >= 1; i--)
	{
		for (int k = 1; k <= nlines -i; k++)
		{
			cout << " ";
		}
		for (int c = 0; c < ((2 * i) - 1); c++)
		{
			cout << "*";
		}
		cout << endl;
	}

}

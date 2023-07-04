#include <iostream>
using namespace std;

int main()
{
	int nlines;
	cin >> nlines;
	for (int i = 1; i <= nlines; i++)
	{
		for (int k = nlines; k >= i; k--)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

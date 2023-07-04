#include <iostream>
using namespace std;

int main()
{
	char c;
	int nlines;
	cin >> c >> nlines;
	int array[50];
	for (int i = 0; i < nlines; i++)
	{
		cin >> array[i];
		for (int k = 0; k < array[i]; k++)
		{
			cout << c;
		}
		cout << "\n";
	}
}

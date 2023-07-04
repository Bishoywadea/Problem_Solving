#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int nlines;
	cin >> nlines;
	for (int i = 1; i <= nlines; i++)
	{

		for (int k = ((4 * i) - 3); k <= ((4 * i) - 1); k++)
		{
			cout << k << " ";
		}
		cout << "PUM" << endl;
	}

}

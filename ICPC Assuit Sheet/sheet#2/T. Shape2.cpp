#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int nlines ,c=-1;
	cin >> nlines;
	for (int  i = 1; i <= nlines; i++)
	{
		int k = 0;
		c = c + 2;
		for (int k = 0; k < nlines-i; k++)
		{
			cout << " ";
		}
		while( k<c)
		{
			cout << "*";
			k++;
		}
		cout << endl;
	}

}

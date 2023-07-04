#include <iostream>
using namespace std;

int main()
{
	int nlines;
	cin >> nlines;
	long long array[10];
	for (int i = 0; i < nlines; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < nlines; i++)
	{
		if (array[i] == 0) { cout << "0"; }
		else
		{
			while (array[i] > 0)
			{
				cout << array[i] % 10 << " ";
				array[i] = array[i] / 10;
			}
		}
		
		cout << "\n";
	}
	
}

#include <iostream>
using namespace std;

int main()
{
	int n, temp;
	cin >> n;
	cin >> temp;
	int max = temp;
	for (int i = 1; i < n; i++)
	{	
		cin >> temp;
		if (max < temp) { max = temp; }
		else
		{

		}
	}
	cout << max;
}

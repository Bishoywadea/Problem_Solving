#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int officers = 0;
	int untreated = 0;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp != -1)
		{
			officers += temp;
		}
		else
		{
			if (officers + temp < 0)
			{
				untreated += abs(officers + temp);
			}
			else
			{
				officers += temp;
			}
		}
	}
	cout << untreated;
}
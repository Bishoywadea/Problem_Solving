#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long l, w;
		cin >> l >> w;
		if (l == w) { cout << "Square"; }
		else
		{
			cout << "Rectangle";
		}
		if (i != t - 1) { cout << endl; }
	}
}

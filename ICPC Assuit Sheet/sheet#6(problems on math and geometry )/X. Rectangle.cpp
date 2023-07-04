#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	double x[4];
	double y[5];
	for (int i = 0; i < 4; i++)
	{
		cin >> x[i] >> y[i];
	}
	sort(x, x + 4);
	sort(y, y + 4);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double x1, y1;
		cin >> x1 >> y1;
		if (x1 >= x[0] && x1 <= x[3] && y1 >= y[0] && y1 <= y[3])
		{
			cout << "YES"<<endl;
		}
		else
		{
			cout << "NO"<<endl;
		}
	}
}
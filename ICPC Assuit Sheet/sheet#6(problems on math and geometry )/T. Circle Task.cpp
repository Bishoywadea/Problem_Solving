#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	long long cx, cy,r,x,y;
	int n;
	cin >> cx >> cy >> r >> n;
	double distace;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		distace = sqrt(pow((cx - x), 2) + pow((cy - y), 2));
		if (distace <= r) { cout << "YES" << endl; }
		else
		{
			cout << "NO" << endl;
		}
	}
}



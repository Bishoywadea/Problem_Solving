#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	long long x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << fixed << setprecision(9) << sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	double x1, x2, x3,x4, y1, y2, y3,y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3>>x4>>y4;
	double slope1, slope2;
	slope1 = (y2 - y1) / (x2 - x1);
	slope2 = (y3 - y4) / (x3 - x4);
	if (slope1 == slope2) { cout << "YES"; }
	else { cout << "NO"; }
}
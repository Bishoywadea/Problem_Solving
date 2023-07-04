#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	double x1, x2, x3,x4, y1, y2, y3,y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3>>x4>>y4;
	double xcenter1, xcenter2, ycenter2, ycenter1, r1, r2,distance;
	xcenter1 = (x1 + x2) / 2;
	xcenter2 = (x3 + x4) / 2;
	ycenter1 = (y1 + y2) / 2;
	ycenter2 = (y3 + y4) / 2;
	r1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) / 2;
	r2 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2)) / 2;
	distance = sqrt(pow((xcenter2 - xcenter1), 2) + pow((ycenter2 - ycenter1), 2));
	if ((r1 + r2) >= distance) { cout << "YES"; }
	else
	{
		cout << "NO";
	}
}
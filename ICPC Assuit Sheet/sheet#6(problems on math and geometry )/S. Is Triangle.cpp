#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	double s1, s2, s3,angle;
	cin >> s1 >> s2 >> s3;
	if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
	{
		cout << "Valid" << endl;
		angle = acos((pow(s3, 2) + pow(s2, 2) - pow(s1, 2)) / (2 * s2 * s3));
		cout << fixed <<setprecision(5) << s2 * s3 * sin(angle) * 0.5;
	}
	else 
	{
		cout << "Invalid";
	}
}
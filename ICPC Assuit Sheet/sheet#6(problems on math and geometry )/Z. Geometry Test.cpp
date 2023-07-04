#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	double r, s;
	cin >> r >> s;
	if (r <= (s / 2)) { cout << "Square"; }
	else if (s * sqrt(2) <= (2 * r)) { cout << "Circle"; }
	else { cout << "Complex"; }
}
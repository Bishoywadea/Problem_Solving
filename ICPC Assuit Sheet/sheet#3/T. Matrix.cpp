#include <iostream>
using namespace std;

int main() {
	int r;
	int d1 = 0, d2 = 0;
	cin >> r;
	int ary[100][100];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++) {
			cin >> ary[i][j];
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++) {
			if (i == j) { d1 = d1 + ary[i][j]; }
			if ((i + j) == (r - 1)) {
				d2 = d2 + ary[i][j];
			}
		}
	}
	cout << abs(d1-d2);
}

#include <iostream>
using namespace std;

int main() {
	
	int row, col;
	int x, y;
	cin >> row >> col;
	char arr[100][100];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> x >> y;
	x = x - 1;
	y=y-1;
	if ('.' !=arr[x-1][y-1] &&
		'.' != arr[x - 1][y] &&
		'.' != arr[x - 1][y + 1] &&
		'.' != arr[x ][y - 1] &&
		'.' != arr[x ][y + 1] &&
		'.' != arr[x + 1][y - 1] &&
		'.' != arr[x + 1][y ] &&
		'.' != arr[x + 1][y + 1]) {cout << "yes";}
	else { cout << "no"; }

}

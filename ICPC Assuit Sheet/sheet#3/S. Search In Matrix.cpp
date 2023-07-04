#include <iostream>
using namespace std;

int main() {
	int r, c;
	bool flag = false;
	long long target;
	cin >> r>> c;
	long long ary[100][100];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++) {
			cin >> ary[i][j];
		}
	}
	cin >> target;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++) {
			if (ary[i][j] == target) { flag = true; break; }
		}
	}
	if (flag) { cout << "will not take number"; }
	else { cout << "will take number"; }

}

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < n; c++)
		{
			if (r == c && r == (n - 1) / 2) { cout << "X"; }
			else if(r==c){cout<< "\\"; }
			else if (r + c == (n-1)) { cout << '/'; }
			else { cout << "*"; }


		}
		cout << endl;
	}
}
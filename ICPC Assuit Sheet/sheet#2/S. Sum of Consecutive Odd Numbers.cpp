#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int nlines;
	int sum;
	int n1, n2;
	cin >> nlines;
	for (int i = 0; i < nlines; i++)
	{
		sum = 0;
		cin >> n1>> n2;
		if (min(n1,n2)%2==0)
		{
			for (int k = min(n1, n2) + 1; k < max(n1, n2); k = k + 2) {
				sum = sum + k;
			}
		}
		else if (min(n1, n2) % 2 != 0)
		{
			for (int k = min(n1, n2) + 2; k < max(n1, n2); k = k + 2) {
				sum = sum + k;
			}
		}

		cout << sum << endl;
	}

}

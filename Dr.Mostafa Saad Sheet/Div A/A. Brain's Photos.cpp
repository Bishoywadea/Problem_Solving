#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int r, c;
	char p;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> p;
			if (p == 'C' || p == 'M' || p == 'Y')
			{
				cout << "#Color";
				return 0;
			}
		}
	}
	cout << "#Black&White";
}
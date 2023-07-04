#include<bits/stdc++.h>
using namespace std;

int main()
{
	int temp;
	int row, col;
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			cin >> temp;
			if (temp == 1)
			{
				row = i;
				col = j;
			}
		}
	}
	cout << abs(col - 3) + abs(row - 3);
}
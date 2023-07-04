#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr1[100][100];
	int arr2[100][100];
	int result[100][100]={0};
	int r1, c1,r2,c2;
	cin >> r1 >> c1;
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cin >> arr1[i][j];
		}
	}
	cin >> r2 >> c2;
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			cin >> arr2[i][j];
		}
	}
	int r = 0;
	while (r < r1) {
		int c = 0;
		while (c<c2)
		{
			for (int i = 0; i < r2; i++)
			{
				result[r][c] = result[r][c] + (arr1[r][i] * arr2[i][c]);
			}
			c++;
		}
		r++;
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}

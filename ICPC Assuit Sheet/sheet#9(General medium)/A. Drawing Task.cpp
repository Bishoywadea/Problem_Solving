#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	char arr[111][111];
	int n, m, t;
	cin >> n >> m >> t;
	for (int i = 1; i <= n; i++)
	{
		for (int g = 1; g <= m; g++)
		{
			arr[i][g] = '.';
		}
	}
	int r1, r2, c1, c2;
	char c;
	while (t--)
	{
		cin >> r1 >> c1 >> r2 >> c2 >> c;
		for (int i = min(r1,r2); i <= max(r1,r2); i++)
		{
			for (int j = min(c1, c2); j <= max(c1, c2); j++)
			{
				arr[i][j] = c;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int g = 1; g <= m; g++)
		{
			cout << arr[i][g];
		}
		cout << endl;
	}
}
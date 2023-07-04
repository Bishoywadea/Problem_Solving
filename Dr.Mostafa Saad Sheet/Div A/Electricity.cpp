#include<bits/stdc++.h>
using namespace std;

bool lastDay(int d, int m, int y)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
	{
		if (m == 2 && d == 29)
		{
			return 1;
		}
	}
	if (month[m - 1] == d)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int t;
	int arr[4] = { 0 };
	int d, m, y, c, days = 0, cost = 0;
	while (cin >> t && t != 0)
	{
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		t--;
		while (t--)
		{

			cin >> d >> m >> y >> c;
			if (y - arr[2] == 0)
			{
				if (m - arr[1] == 0)
				{
					if (d - arr[0] == 1)
					{
						days++;
						cost += (c - arr[3]);
					}
				}
				else
				{
					if (m - arr[1] == 1)
					{
						if (lastDay(arr[0], arr[1], arr[2]) && d == 1)
						{
							days++;
							cost += (c - arr[3]);
						}
					}
				}
			}
			else if (y - arr[2] == 1)
			{
				if (m == 1 && d == 1 && arr[1] == 12 && lastDay(arr[0], arr[1], arr[2]))
				{
					days++;
					cost += (c - arr[3]);
				}
			}
			arr[0] = d;
			arr[1] = m;
			arr[2] = y;
			arr[3] = c;
		}
		cout << days << " " << cost << endl;
		days = 0;
		cost = 0;
	}
}
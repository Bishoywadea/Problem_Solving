#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
		bool arrange = true;
		for (int i = 0; i < n/2; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << "#";
			}
			cout << endl;
			if (arrange)
			{
				for (int j = 0; j < m-1; j++)
				{
					cout << '.';
				}
				cout << '#' << endl;
				arrange = false;
			}
			else
			{
				cout << '#';
				for (int j = 0; j < m - 1; j++)
				{
					cout << '.';
				}
				cout << endl;
				arrange = true;
			}
		}
		for (int i = 0; i < m; i++)
		{
			cout << '#';
		}
}

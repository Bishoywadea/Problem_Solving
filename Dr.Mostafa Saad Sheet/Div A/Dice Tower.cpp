#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool flag = 1;
	int t;
	cin >> t;
	int top;
	cin >> top;
	while (t--)
	{
		int n1, n2;
		cin >> n1 >> n2;
		if (n1 + n2 == 7 || n1 == (7 - top) || n2 == (7 - top) || n1==top ||n2=top)
		{
			flag = 0;
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
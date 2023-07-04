#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; char c;
	cin >> n;
	set<char> d;
	set<char> s;
	set<char> a;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> c;
			if (i == j || j + i == n-1)
			{
				d.insert(c);
			}
			else
			{
				s.insert(c);
			}
			a.insert(c);
		}
	}
	if (s.size() == 1 && d.size() == 1 &&a.size()==2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
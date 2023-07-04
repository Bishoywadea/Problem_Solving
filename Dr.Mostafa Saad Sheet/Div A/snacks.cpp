#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	map<int,int> m;
	int temp;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		m.insert({ temp,i });
	}
	int current = n,lastindex=0;
	while (current != 0)
	{
		if (m[current] <= lastindex)
		{
			cout << current << " ";
			current--;
		}
		else
		{
			for (int i = 0; i < m[current]-lastindex; i++)
			{
				cout << endl;
			}
			cout << current << " ";
			lastindex = m[current];
			current--;
		}
	}
}
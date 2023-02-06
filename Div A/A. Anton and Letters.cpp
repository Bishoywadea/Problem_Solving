#include<bits/stdc++.h>
using namespace std;

int main()
{
	string group;
	getline(cin, group);
	set<char> s;
	for (int i = 0; i < group.size(); i++)
	{
		if (group[i] != '{' && group[i] != '}' && group[i] != ' ' && group[i] != ',')
		{
			s.emplace(group[i]);
		}
	}
	cout << s.size();
}
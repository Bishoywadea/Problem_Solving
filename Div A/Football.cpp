#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string s;
	cin >> n;
	vector<string> v;
	set<string> teams;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		v.push_back(s);
		teams.insert(s);
	}
	auto it = teams.begin();
	int count1=count(v.begin(), v.end(), *it);
	it = teams.end();
	int count2 = count(v.begin(), v.end(), *(--it));
	if (count1 > count2)
	{
		it = teams.begin();
		cout << *it;
	}
	else
	{
		it = teams.end();
		cout << *(--it);
	}
}
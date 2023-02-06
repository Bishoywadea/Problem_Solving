#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cal=0,x;
	vector<int> v;
	for (int i = 0; i <= 3; i++)
	{

		cin >> x;
		v.push_back(x);
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		cal += v[s[i]-49];
	}
	cout << cal;
}
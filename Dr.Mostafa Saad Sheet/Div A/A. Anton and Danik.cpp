#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a = 0, d = 0;
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			a++;
		}
		else
		{
			d++;
		}
	}
	if (a > d)
	{
		cout << "Anton";
	}
	else if(d>a)
	{
		cout << "Danik";
	}
	else
	{
		cout << "Friendship";
	}
}
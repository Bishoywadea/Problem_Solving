#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int up = 0, down = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] <97)
		{
			up++;
		}
		else
		{
			down++;
		}
	}
	if (down >= up)
	{
		for (int i = 0; i < s.size(); i++)
		{
			s[i] = tolower(s[i]);
		}
		cout << s;
	}
	else
	{
		for (int i = 0; i < s.size(); i++)
		{
			s[i] = toupper(s[i]);
		}
		cout << s;
	}
}
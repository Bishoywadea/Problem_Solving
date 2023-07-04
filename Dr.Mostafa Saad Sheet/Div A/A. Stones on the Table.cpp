#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count = 0,n;
	cin >> n;
	string s;
	cin >> s;
	char prev;
	prev = s[0];
	for (int i = 1; i < n; i++)
	{
		if (s[i] == prev)
		{
			count++;
		}
		prev = s[i];
	}
	cout << count;
}
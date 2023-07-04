#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int index = 0;
	string s;
	cin >> s;
	int i;
	for ( i = 0; i < s.size(); i++)
	{
		string temp = s.substr(i, i + 3);
		if (s.substr(i, 3) == "WUB")
		{
			index += 2;
			i += 2;
			cout << " ";
		}
		else
		{
			cout << s[i];
		}
	}
	s.substr(i, s.size() - i);
}
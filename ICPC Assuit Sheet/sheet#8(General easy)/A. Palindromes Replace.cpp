#include <iostream>
#include<string>
using namespace std;


int main() {
	bool flag = true;
	string s;
	cin >> s;
	int size = s.size();
	for (int i = 0; i < size; i++)
	{
		if (s[i] == '?')
		{
			if (i < size / 2)
			{
				if (s[size - i - 1] == '?')
				{
					s[i] = 'a';
					s[size - i - 1] = 'a';
				}
				else
				{
					s[i] = s[size - i - 1];
				}
			}
			else if (i >= size / 2)
			{
				s[i] = s[size - i - 1];
			}
		}
		else
		{
			if (s[i] == s[size - i - 1])
			{
				flag = true;
			}
			else
			{
				flag = false;
			}
		}
	}
	if (flag)
	{
		if (size % 2 != 0 && s[size / 2] == '?') { s[(size / 2)] = 'a'; }
		cout << s;
	}
	else
	{
		cout << -1;
	}
}

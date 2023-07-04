#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (s.size() >= 26)
	{
		int arr[26] = { 0 };
		int count = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (arr[int(toupper(s[i])) - 65] == 0)
			{
				arr[int(toupper(s[i])) - 65]++;
				count++;
			}
		}
		if (count == 26)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		cout << "NO";
	}
}
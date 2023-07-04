#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>> n;
	string orgi , key,s;
	cin >> s;
	orgi = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	for (int i = 0; i < s.size(); i++)
	{
		if (n==1)
		{
			for (int j = 0; j < 62; j++)
			{
				if (s[i] == orgi[j]) { cout << key[j]; break; }
			}
		}
		else
		{
			for (int j = 0; j < 62; j++)
			{
				if (s[i] == key[j]) { cout << orgi[j]; break; }
			}
		}
	}
}

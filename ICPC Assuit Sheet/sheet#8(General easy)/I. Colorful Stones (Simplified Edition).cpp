#include<iostream>
#include<string>
using namespace std;

string s, command;

int moveControl(int index,int counter)
{
	if (index < s.size() && index < command.size())
	{
		if (s[counter] == command[index])
		{
			moveControl(index + 1, counter + 1);
		}
		else
		{
			moveControl(index + 1, counter);
		}
	}
	else
	{
		return counter + 1;
	}
}

int main()
{
	cin >> s >> command;
	cout << moveControl(0, 0);
}


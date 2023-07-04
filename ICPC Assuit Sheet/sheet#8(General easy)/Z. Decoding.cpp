#include<iostream>
#include<list>
#include<string>
using namespace std;

int main()
{
	bool flag = true;
	int index = 0;
	list<char> encoded;
	string decoded;
	cin >> decoded;
	int size = decoded.size();
	if (size % 2 == 0)
	{
		while (index < size)
		{
			if (flag) 
		{
			encoded.push_front(decoded[index]);
			index++;
			flag = false;
		}
		else
		{
			encoded.push_back(decoded[index]);
			index++;
			flag = true;
		}
		}
	}
	else
	{
		while (index < size)
		{
			if (flag) 
		{
			encoded.push_back(decoded[index]);
			index++;
			flag = false;
		}
		else
		{
			encoded.push_front(decoded[index]);
			index++;
			flag = true;
		}
		}
	}
	for (auto i = encoded.begin(); i != encoded.end(); i++)
	{
		cout << *i;
	}
}
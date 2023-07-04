#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int before1, after1;
	int before2, after2;
	bool finaldesion = false;
	bool maybe=true;
	cin >> n;
	cin >> before1 >> after1;
	n -= 1;
	if (after1 != before1 && !finaldesion)
	{
		finaldesion = true;
	}
	while (n--)
	{
		after2 = after1;
		before2 = before1;
		cin >> before1 >> after1;
		if (after1 != before1)
		{
			finaldesion = true;
		}
		else if (after1 > after2 && maybe)
		{
			maybe = false;
		}
	}
	if (finaldesion)
	{
		cout << "rated";
	}
	else if (maybe)
	{
		cout << "maybe";
	}
	else
	{
		cout << "unrated";
	}
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void printer(int n)
{
	int i;
	for (i = n; i > 1; i--)
	{
		cout << i << " ";
	}
	cout << i;
}

int main()
{
	int n;
	cin >> n;
	printer(n);
}
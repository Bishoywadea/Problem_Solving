#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void printer(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << i << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	printer(n);
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void printer(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "I love Recursion" << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	printer(n);
}
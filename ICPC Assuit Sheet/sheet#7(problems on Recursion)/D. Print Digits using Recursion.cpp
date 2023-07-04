#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void printer(string n)
{
	for (int i = 0; i < n.size(); i++)
	{
		cout << n[i] << " ";
	}
	cout << endl;
}

int main()
{
	int t;
	string n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		printer(n);
	}
}
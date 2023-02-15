#include<bits/stdc++.h>
using namespace std;

int SumOfDigits(string s)
{
	int sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		sum += s[i] - 48;
	}
	return sum;
}

int main()
{
	string s;
	cin >> s;
	int count = 0;
	while (s.size() != 1)
	{
		s = to_string(SumOfDigits(s));
		count++;
	}
	cout << count;
}

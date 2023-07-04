#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

char base[10000]={0};

long long fromBaseToDecimal(string s , int power)
{
	long long number=0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] - 48 <= 9 && s[i] - 48 >= 0)
		{
			number = number + ((s[i]-48) * pow(power, s.size() - 1-i));
		}
		else
		{
			number = number + ((s[i] - 55) * pow(power, s.size() - 1 - i));
		}
	}
	return number;
}


long fromDecimalToBase(long long n, int power)
{
	long index = 0;
	while (n > 0)
	{
		if (n % power <= 9)
		{
			base[index] =char( (n % power)+48);
			n /= power;
			index++;
		}
		else
		{
			base[index] = char((n % power)+55);
			n /= power;
			index++;
		}
	}
	return index;
}

int main()
{
	int t;
	cin >> t;
	if (t == 1)
	{
		string n;
		int x;
		cin >> n>>x;
		cout << fromBaseToDecimal(n, x);
	}
	else
	{
		long long n;
		int x;
		long index;
		cin >> n >> x;
		index = fromDecimalToBase(n, x);
		for (int i = index-1; i >=0 ; i--)
		{
			cout << base[i];
		}
	}
}



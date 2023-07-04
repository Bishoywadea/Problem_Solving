#include <iostream>
using namespace std;

int main()
{
	int n, temp,even=0 ,odd=0,pos=0,neg=0 ;
	cin >> n ,temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
			if (temp% 2 == 0) { even++; }
			else { odd++; }
			if (temp > 0) { pos++; }
			else if (temp <0)
			{
				neg++;
			}
			else
			{

			}

	}
	cout << "Even: " << even << "\n" << "Odd: " << odd << "\n" << "Positive: " << pos << "\n" << "Negative: " << neg;
}


#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, a, b,sumofdigit,temp=0,sum=0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
	{
		sumofdigit = 0;
		temp = i;
		while (temp>0)
		{
			sumofdigit = temp % 10 + sumofdigit;
			temp = temp / 10;
		}
		if (sumofdigit >= a && sumofdigit <= b) {
			sum=sum+i;
		}
	}
	cout << sum;

}

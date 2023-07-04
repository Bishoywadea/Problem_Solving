#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main()
{
	int t; 
	long long n, s,index=0;
	long long sum = 0;
	long long arr[100001];
    cin >> t;
	for (int q = 0; q < t; q++)
	{
		sum = 0;
		index = 0;
		cin >> n >> s;
		if (n*(n+1)/2 < s){cout << -1 << endl;}
		else
		{
			for (long long j = (n-sum); j >= 1; j--)
			{
				if (sum+j <= s)
				{
					sum = sum + j;
					arr[index] = j;
					index++;
				}
				else {}
				if (sum==s)
				{
					break;
				}
			}
			for (long long z = 0; z < index; z++)
			{
				cout << arr[z] << " ";
			}
			cout << endl;
		}
	}
}

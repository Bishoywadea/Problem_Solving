#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[100];
	int max = -1, min = 101, prime = 0, palin = 0, maxdivisor,maxtimes=0;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		int digit,reverse=0,temp;
		cin >> arr[i];
		if (arr[i] > max) { max = arr[i]; }
		if(arr[i]<min){ min = arr[i]; }
		if(arr[i]!=1)
		{
			for (int j = 1; j <= arr[i]/2; j++)
			{
				if (arr[i] % j == 0) { count++; }
			}
			if (count < 2) { prime++; }
		}
		temp = arr[i];
		while (temp > 0) {
			digit = temp % 10;
			reverse = (reverse * 10) + (digit);
			temp = temp / 10;
		}
		if (reverse == arr[i]) { palin++; }
		count = 2;
		for (int j = 2; j < arr[i]; j++)
		{
			if (arr[i] % j ==0 ) { count++; }
		}
		if (count > maxtimes) { maxdivisor = arr[i]; maxtimes = count; }
		else if (count == maxtimes) 
		{
			if (arr[i] > maxdivisor) {
				maxdivisor = arr[i]; maxtimes = count;
			}
		}
		
	}
	cout << "The maximum number : " << max << endl;
	cout << "The minimum number : " << min << endl;
	cout << "The number of prime numbers : " << prime << endl;
	cout << "The number of palindrome numbers : " << palin << endl;
	cout << "The number that has the maximum number of divisors : " << maxdivisor ;

	
}

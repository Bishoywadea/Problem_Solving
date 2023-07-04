#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long arr[33] = { 0 };
	arr[1] = 1;
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << arr[i] << " ";
		}
		for (int i = j+2; i >0 ; i--)
		{
			arr[i] = arr[i] + arr[i - 1];
		}
		
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	char arr[5] = { 'R','O','Y','\0'};
	char arr2[5] = { 'G','B','I','V','\0'};
	int n;
	cin >> n;
	cout << arr;
	n -= 3;
	for (int i = 0; i < n/4; i++)
	{
		cout << arr2;
	}
	for (int i = 0; i < n%4; i++)
	{
		cout << arr2[i];
	}
}


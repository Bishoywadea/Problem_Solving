#include<iostream>

using namespace std;



int main()
{
	int n,index;
	int arr[110];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> index;
		arr[index] = i + 1;
	}
	for (int i = 1; i <= n; i++)
	{
		cout<<arr[i] << " ";
	}
}

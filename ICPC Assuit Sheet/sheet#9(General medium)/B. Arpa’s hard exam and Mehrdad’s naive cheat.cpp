#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[5] = { 6,8,4,2 };
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 1;
		return 0;
	}
	n %= 4;
	cout << arr[n];

}
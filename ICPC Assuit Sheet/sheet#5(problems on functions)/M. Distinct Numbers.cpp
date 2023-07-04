#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	bool flag = true;
	int n,temp,size=0;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		for (int j = 0; j <size; j++)
		{
			if (arr[j] == temp) { flag = false; break; }
			else
			{
				flag = true;
			}
		}
		if (flag)
		{
			arr[size] = temp;
			size++;
		}
	}
	cout << size;
}

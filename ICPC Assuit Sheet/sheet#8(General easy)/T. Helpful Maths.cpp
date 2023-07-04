
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string s;
	int arr[1000] = { 0 };
	int index = 0;
	cin >> s;
	int size = s.size();
	for (int i = 0; i < size; i++)
	{
		if (s[i] != '+')
		{
			arr[index] = s[i] - 48;
			index++;
		}
	}
	sort(arr, arr + index);
	for (int i = 0; i < index - 1; i++)
	{
		cout << arr[i] << "+";
	}
	cout << arr[index - 1];
}
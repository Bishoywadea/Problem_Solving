#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	int arr[5]={0};
	cin >> s;
	int x = s.size();
	for (int i = 0; i < x; i++)
	{
		if (s[i] < 97) { s[i] = s[i] + 32; }
		if (s[i] == 101) { arr[0]++; }
		else if (s[i] == 103) { arr[1]++; }
		else if (s[i] == 121) { arr[2]++; }
		else if (s[i] == 112) { arr[3]++; }
		else if (s[i] == 116) { arr[4]++; }
		else{}
	}
	sort(arr, arr + 5);
	cout << arr[0];

}
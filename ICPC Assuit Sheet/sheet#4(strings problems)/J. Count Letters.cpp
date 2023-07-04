#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int arr[26]={0};
	for (int i = 0; i < s.size(); i++)
	{
		int num = int(s[i]);
		if (arr[num - 97] == 0) { arr[num - 97] = 1; }
		else
		{
			arr[num - 97] = arr[num - 97] + 1;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] != 0) { cout << char(i + 97) << " : " << arr[i]<<endl; }
		else{}
	}
}




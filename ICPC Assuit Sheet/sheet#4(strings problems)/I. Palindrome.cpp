#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	bool flag=true;
	cin >> s;
	int x = s.size();
	if (x%2==0){
		for (int i = 0; i < x/2; i++)
		{
			if (s[i]==s[x-i-1]){}
			else
			{
				cout << "NO"; flag=false; break;
			}
		}
	}
	else
	{
		for (int i = 0; i < floor(x/2); i++)
		{
			if (s[i] == s[x - i - 1]) {}
			else
			{
				cout << "NO"; flag = false; break;
			}
		}
	}
	if (flag) { cout << "YES"; }
}




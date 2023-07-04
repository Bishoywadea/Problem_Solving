#include <iostream>
#include <string>

using namespace std;


int main(){
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		int x = int(s[i]);
		if (x == 44) { x = 32; }
		else if (x >= 97)
		{
			x = x-32;
		}
		else
		{
			x = x + 32;
		}
		s[i] = x;
		cout << s[i];
	}
}

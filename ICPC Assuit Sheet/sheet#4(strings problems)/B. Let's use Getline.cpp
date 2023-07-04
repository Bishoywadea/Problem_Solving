#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s1;
	getline(cin, s1);
	for (int i = 0; i < s1.size(); i++)
	{
		if (int(s1.at(i)) == 92) { break; }
		else
		{
			cout << s1.at(i);
		}
	}
}

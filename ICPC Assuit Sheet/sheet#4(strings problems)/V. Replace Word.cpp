#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int x = s.size();
	int strick = 0;
	int start = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T') { start = i; s.erase(start, (i - start + 5)); s.insert(start, 1, ' '); i = i - 1; }
		
	}
	cout << s;
}

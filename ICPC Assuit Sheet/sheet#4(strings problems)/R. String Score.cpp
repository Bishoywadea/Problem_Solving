#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
	int x;
	cin >> x;
	string s;
	cin >> s; 
	int score = 0;
	for (int i = 0; i < x; i++)
	{
		if (s[i] == 'V') {score = score + 5;}
		else if (s[i] == 'W') { score = score + 2;}
		else if (s[i] == 'X') { i = i + 1;}
		else if (s[i] == 'Y') { s.insert(x, 1, s[i + 1]); i++; x++; }
		else 
		{
			if (s[i + 1] == 'V') { score = score / 5; i++; }
			else if (s[i + 1] == 'W') { score = score / 2; i++; }
		}

	}
	cout << score;
}
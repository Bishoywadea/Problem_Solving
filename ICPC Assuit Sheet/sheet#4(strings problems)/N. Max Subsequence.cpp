#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int max = 1;
	int index = 0;
	for (int i = index; i < n-1; i++)
	{
		if (s[i] != s[i + 1]) { max++; }
		else { index = i + 1; }
	}

	cout << max;

	}


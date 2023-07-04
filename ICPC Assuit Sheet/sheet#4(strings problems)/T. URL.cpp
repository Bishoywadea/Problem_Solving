#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int x = s.size();
	int counter = 1;
	for (int i = 0; i < x; i++)
	{
		if (s[i] == '=') {
			if (counter == 1) {
				cout << "username: ";
				int j = i + 1;
				while (s[j] != '&') { cout << s[j]; j++; }
				i = j;
				cout << endl;
				counter++;
			}
			else if (counter == 2) {
				cout << "pwd: ";
				int j = i + 1;
				while (s[j] != '&') { cout << s[j]; j++; }
				i = j;
				cout << endl;
				counter++;
			}
			else if (counter == 3) {
				cout << "profile: ";
				int j = i + 1;
				while (s[j] != '&') { cout << s[j]; j++; }
				i = j;
				cout << endl;
				counter++;
			}
			else if (counter == 4) {
				cout << "role: ";
				int j = i + 1;
				while (s[j] != '&') { cout << s[j]; j++; }
				i = j;
				cout << endl;
				counter++;
			}
			else {
				cout << "key: ";
				int j = i + 1;
				while (j<x) { cout << s[j]; j++; }
				i = j;
				cout << endl;
			}

		}
		
		
		
		
	};
}
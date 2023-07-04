#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n, t;
	cin >> n >> t; 
	string s;
	cin >> s; 
	string com;
	int n1, n2;
	while (t--) { 
		cin >> com;
		if (com == "pop_back") {
			s.pop_back();
		}
		else if (com == "front") {
			cout << s.front() << endl;
		}
		else if (com == "back") {
			cout << s.back() << endl;
		}
		else if (com == "sort") {
			cin >> n1 >> n2; 
			sort(s.begin() + min(n1, n2) - 1, s.begin() + max(n1, n2));
		}
		else if (com == "reverse") {
			cin >> n1 >> n2;
			reverse(s.begin() + min(n1, n2) - 1, s.begin() + max(n1, n2));
		}
		else if (com == "print") {
			int pos;
			cin >> pos;
			cout << s[pos - 1] << endl;
		}
		else if (com == "substr") {
			cin >> n1 >> n2; 
			for (int i = min(n1, n2) - 1; i <= max(n1, n2) - 1; i++) {
				cout << s[i];
			}
			cout << endl;
		}
		else {
			char c;
			cin >> c;
			s.push_back(c);
		}
	}
}

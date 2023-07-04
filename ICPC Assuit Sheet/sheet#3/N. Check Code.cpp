#include <iostream>
#include<string>
using namespace std;

int main() {
		int a,b,c=0;                                                         
		cin >> a>>b;
		string s;
		cin >> s;
		if (size(s) == a + b + 1) {
			if (s.at(a ) == 45) {
				for (int i = 0; i < a+b+1; i++)
				{
					if (s.at(i)>=48 && s.at(i) <= 57)
					{ }
					else { c++; }
				}
				if (c == 1) { cout << "Yes"; }
				else { cout << "No"; }
			}
			else
			{
				cout << "No";
			}
		}
		else
		{
			cout << "No";
		}
}
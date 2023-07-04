#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, hello;
	cin >> s1;
	hello = "hello";
	int n2 = hello.size();
	int n1 = s1.size();
		int index = 0;
		int count = 0;
		for (int i = 0; i < n2; i++)
		{
			for (int j = index; j < n1; j++) {
				if (s1[j] == hello[i])
				{
					index = j + 1;
					count = count + 1;
					break;
				}
				else
				{
				}

			}
		}
		if (count == n2) { cout << "YES"; }
		else
		{
			cout << "NO";
		}
	}


#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	if (size <= 2) 
	{
		cout << "NO";
	}
	else
	{
		if (size % 2 == 0) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	
}

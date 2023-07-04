#include <iostream>
using namespace std;

int main()
{
	long long n1, n2, n3, n4,last_two;
	cin >> n1 >> n2 >> n3 >> n4;
	last_two=((n1%100)* (n2 % 100)* (n3 % 100)* (n4 % 100))%100;
	if (last_two <= 9) { cout << "0" << last_two; }
	else
	{
		cout << last_two;
	}
	

}
#include <iostream>
using namespace std;

int main()
{
	int n, temp=0, digit, copy;
	cin >> n;
	copy = n;
	while (copy > 0) {
		temp = (temp * 10) + (copy % 10);
		copy = copy / 10;
	}
	if (temp == n) { cout << temp << "\n" << "YES"; }
	else
	{
		cout <<temp<<"\n" << "NO";
	}

}
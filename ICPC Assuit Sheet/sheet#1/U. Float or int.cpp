#include <iostream>
using namespace std;

int main()
{
	float n;
	cin >> n;
		if (int(n) - n == 0) { cout << "int " << n; }
		else
		{
			cout << "float " << int(n) << " " << n - int(n);
		}
		
}
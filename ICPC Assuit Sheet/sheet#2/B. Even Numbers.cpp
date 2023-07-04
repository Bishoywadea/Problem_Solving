#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	if (n == 1) { cout << -1; }
	else{
		for (int i = 2; i <= n; i = i + 2)
		{
			cout << i << endl;
		}
	}
	
}


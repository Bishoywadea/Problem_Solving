#include <iostream>
#include<algorithm>
using namespace std;

int fabo(int n) 
{
	if (n == 1) { return 0; }
	else if (n == 2) { return 1; }
	else
	{
		return fabo(n - 1) + fabo(n - 2);
	}
}

int main()
{
	int n;
	cin >> n;
	cout<<fabo(n);
}



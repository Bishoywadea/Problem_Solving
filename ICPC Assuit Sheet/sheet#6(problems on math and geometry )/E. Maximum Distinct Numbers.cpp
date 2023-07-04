#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n, sum = 0;
	int x1,x2;
	cin >> n;
	x1 = (-1 + sqrt(1 + 8 * n)) / 2;
	x2 = (-1 - sqrt(1 - 8 * n)) / 2;
	cout << max(x1,x2);
}

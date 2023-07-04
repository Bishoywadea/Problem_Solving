#include <iostream>
using namespace std;


long long summation(int n, long long sum, int index)
{
	long long temp = 0;
	if (index == n) { cout << sum; return 0; }
	else
	{
		cin >> temp;
		sum += temp;
		index += 1;
	}
	summation(n, sum, index);
}

int main() {
	int n, index = 0;
	cin >> n;
	long long sum = 0;
	summation(n, sum, index);
}
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


void maxFinder( int n,long long max ,int index)
{
	if (index == n) { cout << max; }
	else
	{
		long long temp;
		cin >> temp;
		if (temp > max) { max = temp; }
		maxFinder(n, max, index+1);
	}
}

int main() {
	int n,index=0;
	long long max,temp;
	cin >> n;
	cin >> temp;
	max = temp;
	index++;
	maxFinder(n, max, index);
}
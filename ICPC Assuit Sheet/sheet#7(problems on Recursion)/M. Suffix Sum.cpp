#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


long long suffixSum( long n,long start,long index,long long sum)
{
	long temp;
	if (index < start) { cin >> temp; }
	else if (index >= start && index != n) { cin >> temp; sum += temp; }
	else { return sum; }
	suffixSum(n, start, index + 1, sum);
}

int main() {
	long n, m, start, index = 0;
	long long sum = 0;
	cin >> n >> m;
	start = n - m;
	cout<< suffixSum(n, start, index,sum);
}
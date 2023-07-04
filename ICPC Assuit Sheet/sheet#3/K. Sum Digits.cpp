#include <iostream>
#include<string>
using namespace std;

int main() {
	int n,sum=0;
	string s;
	cin >> n>>s;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
	{
		
		sum = sum +(int(s[i])-48) ;
	}
	cout << sum;

	delete[] arr;
}
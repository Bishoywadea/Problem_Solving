#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


void facto(int n ,int long long factoriall)
{
	if (n == 1) { cout<< factoriall; }
	else
	{
		factoriall =factoriall* n;
		facto(n-1,factoriall);
	}
}

int main() {
	int n;
	long long factoriall = 1;
	cin >> n;
	facto(n,factoriall);
}
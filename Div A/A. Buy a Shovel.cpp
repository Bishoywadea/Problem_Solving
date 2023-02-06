#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, r,n=1;
    cin >> k >> r;
	while (((k*n-r)%10 !=0 && ((k * n) % 10 != 0)))
	{
		n++;
	}
	cout << n;
}
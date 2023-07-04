#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int limak, bob,years=0;
	cin >> limak >> bob;
	while (limak<=bob)
	{
		years++;
		limak *= 3;
		bob *= 2;
	}
	cout << years;
}
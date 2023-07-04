#include <iostream>
using namespace std;

int main()
{
    long int n;
	cin >> n;
	if ((n/1000)%2==0){ cout << "EVEN"; }
	else
	{
		cout << "ODD";
	}
	/*while (n>10)
	{
		n = n / 10;
	}
	if (n%2 == 0) { cout << "EVEN"; }
	else { cout << "ODD"; }*/
}
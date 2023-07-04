#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n1, n2,sum=0;
	cin >> n1 >> n2;
	while (n1 > 0 && n2 > 0) {
		for (int i = min(n1,n2); i <= max(n1,n2); i++)
		{
			cout << i << " ";
			sum = sum + i;
		}
		cout << "sum =" << sum<<endl;
		cin >> n1 >> n2;
	}
}

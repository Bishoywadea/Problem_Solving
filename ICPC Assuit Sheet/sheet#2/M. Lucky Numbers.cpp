#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n1,n2;
	bool flag1 = false;
	bool flag2 = true;
	cin >> n1 >> n2;
	for (int i = n1; i <= n2; i++)
	{
		int temp = i;
		while (temp > 0) {
			if (temp % 10 == 4 || temp % 10 == 7) {
				temp = temp / 10;
				flag1 = true;
			}
			else
			{
				flag1 = false;
				break;
			}
		}
		if (flag1) {
			flag2 = false;
			cout << i << " "; }
		else
		{
		}
	}
	if (flag2) { cout << "-1"; }
	else
	{

	}
}

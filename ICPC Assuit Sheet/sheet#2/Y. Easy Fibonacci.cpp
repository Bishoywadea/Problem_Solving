#include <iostream>
#include <algorithm>
using namespace std;
//int fabo(int n) {
//	if (n == 1) { return 0; }
//	else if (n == 2) { return 1; }
//	else
//	{
//		return (fabo(n-1) + fabo(n-2));
//	}
//
//}

int main()
{
	int n,temp1=0,temp2=1,c;
	cin >> n;
	for (int i = 1; i <= n; i++)
		{
		if (i == 1) { cout << "0 "; }
		else if (i == 2) { cout << "1 "; }
		else{
			c = temp1 + temp2;
			cout <<  c << " ";
			temp1 = temp2;
			temp2 = c;
		}
		
		
		}
	

}

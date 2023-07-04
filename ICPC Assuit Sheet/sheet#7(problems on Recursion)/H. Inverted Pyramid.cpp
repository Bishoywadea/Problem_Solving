#include <iostream>
#include<algorithm>
using namespace std;

void pyramidBuilder(int n ,int spaces)
{
	if(spaces<1){return;}
	else
	{
		for (int i = 0; i < n - spaces; i++)
		{
			cout << " ";
		}

		for (int i = 0; i < (-1 + (spaces * 2)); i++)
		{
			cout << "*";
		}
		cout << endl;
		spaces -= 1;
		pyramidBuilder(n, spaces);
	}


}

int main() {
	int n,spaces=1;
	cin >> n;
	spaces = n;
	pyramidBuilder(n,spaces);
}
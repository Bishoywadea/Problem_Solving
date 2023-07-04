#include<bits/stdc++.h>
using namespace std;

int main()
{
    string real, command;
    cin >> real >> command;
	int rsize, csize;
	rsize = real.size();
	csize = command.size();
	int postion=1;
	for (int i = 0; i < csize; i++)
	{
			if (real[postion-1] == command[i])
			{
				postion++;
			}
	}
	cout << postion;
}
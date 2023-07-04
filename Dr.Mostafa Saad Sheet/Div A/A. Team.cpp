#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int voices=0,x,problems=0;
	cin >> n;
	int arr[3];
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> x;
			if (x == 1)
			{
				voices++;
			}
		}
		if (voices >= 2)
		{
			problems++;
		}
		voices = 0;
	}
	cout << problems;
}
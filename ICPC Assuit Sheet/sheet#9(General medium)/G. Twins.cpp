#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,x,sum=0,stolen=0;
	cin >> n;
	vector<int> coins;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		coins.push_back(x);
		sum += x;
	}
	sort(coins.rbegin(), coins.rend());
	for (int i = 0; i < n; i++)
	{
		if ((stolen + coins[i]) > sum - coins[i])
		{
			cout << i + 1;
			return 0;
		}
		else
		{
			stolen += coins[i];
			sum -= coins[i];
		}
	}

}
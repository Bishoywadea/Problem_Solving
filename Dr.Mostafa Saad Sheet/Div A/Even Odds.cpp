#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n, k;
	unsigned long long result = 0;
	cin >> n >> k;
	if (n % 2 == 0)
	{
		if (k > ceil(n / 2))
		{
			result = 2 * (k - ceil(n / 2));
			cout << result;
		}
		else
		{
			result = 2 * k - 1;
			cout << result;
		}
	}
	else
	{
		if (k > ((n/2)+1))
		{
			result = 2 * (k - ((n / 2) + 1));
			cout << result;
		}
		else
		{
			result = 2 * k - 1;
			cout << result;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
	int n, c1 = 0, c2 = 0, mx = 0, mn = 1000000007;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == mx) c1++;
		if (arr[i] == mn) c2++;
	}
	if (mx == mn) cout << 0;
	else cout << (n - c1 - c2);
	return 0;
}
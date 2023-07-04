#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	string alpha = "qwertyuiopasdfghjklzxcvbnm";
	vector<char> v;
	for (int i = 0; i < 26; i++)
	{
		v.push_back(alpha[i]);
	}
	int n, k;
	cin >> n >> k;
	vector<char> result;
	for (int i = 0; i <= ceil(n/k); i++)
	{
		result.insert(result.end(),alpha.begin(), alpha.begin() + k);
	}
	for (int i = 0; i < n; i++)
	{
		cout << result[i];
	}
}
#include<bits/stdc++.h>
#include <iomanip>
#include<algorithm>
using namespace std;
const double pi = 3.14159265358979323846;
#define MOD 10000000 
#define ll long long
#define all(x) x.begin(),x.end()
#define nw(n) ll*arr=new ll[n]
template<typename T>
T findMax(set<T> my_set)
{
	T max_element;
	if (!my_set.empty())
		max_element = *(my_set.rbegin());
	return max_element;
}
template<typename T>
T findMin(set<T> my_set)
{
	T min_element;
	if (!my_set.empty())
		min_element = *my_set.begin();
	return min_element;
}
ll fastPow(ll a, ll b)
{
	ll ret = 1;
	while (b)
	{
		if (b % 2 == 1)
		{
			ret *= a;
			ret %= MOD;
		}
		a *= a;
		a %= MOD;
		b /= 2;
	}
	return ret;
}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
void Sieve(int n)
{
	vector<bool> prime(n + 1,true);

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}
void Fasto()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
bool cmp(std::pair<int, int> a, std::pair<int, int> b) {
	if (a.first != b.first) {
		return a.first > b.first;
	}
	return a.second < b.second;
}


void sol()
{
	int n, k, count = 0;
	cin >> n >> k;
	string s;
	for (int i = 0; i < n; i++)
	{
		bool flag = 1;
		vector<int> v(101, 0);
		cin >> s;
		for (int i = 0; i < s.size(); i++)
			v[s[i] - '0']++;
		for (int i = 0; i <= k; i++)
			if (!v[i])
				flag = 0;
		if (flag)
			count++;
	}
	printf("%d", count);
}

int main()
{
	Fasto();
	int t=1;
	//cin >> t;
	while (t--)
	{
		sol();
		cout << endl;
	}
}
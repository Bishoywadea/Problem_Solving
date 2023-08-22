/*
* Link:https://codeforces.com/contest/271/problem/B
*/
#include <bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
const double PI = 3.14159265358979323846;
#define MOD 1000000007 
#define ll  long long
#define ld  long double
#define ull  unsigned long long
#define vii  vector<pair<int,int>>
#define vvi  vector<vector<char>>
#define vi  vector<int>
#define out  {cout << "0"; return;}
#define all(x) x.begin(),x.end()
#define allinv(x) x.rbegin(),x.rend()
bool isWholeNumber(double number) { return number == static_cast<int>(number); }
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

int dx[] = { 1, 0, -1, 0, 1, -1, 1, -1 };
int dy[] = { 0, 1, 0, -1, 1, -1, -1, 1 };

void Fasto()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
vector<int> primes;

void Sieve(ll n)
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
			primes.push_back(p);
}

void sol() {
	Sieve(100100);
	ll n,m,x;
	cin >> n >> m;
	vector<vector<ll>> mat(n, vector<ll>(m));
	for (ll i = 0; i < n; i++){
		for (ll j = 0; j < m; j++) {
			cin >> x;
			auto it = lower_bound(all(primes), x);
			int k = it - primes.begin();
			if (k == 0)
				mat[i][j] = abs(x - primes[k]);
			else if(k==primes.size())
				mat[i][j] = abs(primes[k + 1] - x);
			else
				mat[i][j] = min(abs(x - primes[k]), abs(primes[k + 1] - x));
		}
	}
	ll c = 0, ans = LLONG_MAX;
	for (ll i = 0; i < n; i++) {
		c = 0;
		for (ll j = 0; j < m; j++) {
			c += mat[i][j];
		}
		ans = min(ans, c);
	}
	for (ll i = 0; i < m; i++) {
		c = 0;
		for (ll j = 0; j < n; j++) {
			c += mat[j][i];
		}
		ans = min(ans, c);
	}
	cout << ans;
}

int main()
{
	FILE* stream;
	//freopen_s(&stream,"jumping.in", "r", stdin);
	//freopen_s(&stream,"output.txt", "w", stdout);
	Fasto();
	ull t = 1;
	//cin >> t;
	while (t--)
	{
		sol();
		cout << endl;
		//cout.flush();
	}
	return 0;
}

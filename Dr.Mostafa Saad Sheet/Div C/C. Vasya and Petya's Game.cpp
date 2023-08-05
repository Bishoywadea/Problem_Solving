/*
* Link: https://codeforces.com/contest/577/problem/C
*/
#include<bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include<algorithm>
using namespace std;
const double PI = 3.14159265358979323846;
#define MOD 1000000000 + 7 
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

vector<bool> is_prime;

void Sieve(ll n)
{
	is_prime.resize(n+1, true);
	is_prime[0] = is_prime[1] = false;

	for (int i = 2; i*i <= n; ++i) {
		if (is_prime[i]) {
			for (int j = i * 2; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}
}

void sol()
{
	ll n;
	vector<int> ans;
	cin >> n;
	Sieve(n);
	for (int i = 0; i <= n; i++) {
		if (!is_prime[i]) continue;
		int j = i;
		ans.push_back(j);
		while (j * i <= n) {
			j *= i;
			ans.push_back(j);
		}
	}
	cout << ans.size() << endl;
	for (auto i : ans)cout << i << " ";
}

int main()
{
	//FILE* stream;
	//freopen_s(&stream,"input.txt", "r", stdin);
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

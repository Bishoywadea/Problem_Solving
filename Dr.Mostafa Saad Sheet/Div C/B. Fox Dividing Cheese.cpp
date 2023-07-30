/*
* Link: https://codeforces.com/contest/371/problem/B
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

map<int, int> factors;

void prime_factors(int n,int s) {
	int divisor = 2;
	while (divisor <= n) {
		if (n % divisor == 0) {
			factors[divisor]+=s;
			n /= divisor;
		}
		else {
			divisor++;
		}
	}
}

void sol()
{
	ll a, b,ans=0;
	bool f = 0;
	cin >> a >> b;
	if (((a % 2 && a % 3 && a % 5 && a!=1) || (b % 2 && b % 3 && b % 5 && b!=1)) && a != b) {
		cout << -1;
		return;
	}
	else if (a == b) {
		cout << 0;
		return;
	}
	prime_factors(a, 1);
	prime_factors(b, -1);
	for (auto i : factors) {
		if (i.first > 5 && i.second != 0)
			f = 1;
		ans += abs(i.second);
	}
	cout << (f ? -1 : ans);
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

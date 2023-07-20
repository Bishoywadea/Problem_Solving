/*
* Link: https://codeforces.com/contest/483/problem/A
*/
#include<bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include<algorithm>
using namespace std;
const double pi = 3.14159265358979323846;
#define MOD 1000000007 
#define ll  long long
#define ull  unsigned long long
#define out  {cout << "NO"; return;}
#define all(x) x.begin(),x.end()
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

void Fasto()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void sol()
{
	ll n, k, last, l, r,has=0;
	cin >> n >> k;
	vector<ll> v(n);
	cin >> l >> r;
	has = r - l + 1;
	v[0] = l + 100000;
	last = r;
	for (ll i = 1; i < n; i++){
		cin >> l >> r;
		has += r - l + 1;
		v[i] = l - last -1;
		last = r;
	}
	v[n - 1] += 100000 - r;
	if (has % k==0)
		cout << 0;
	else
		cout << k - (has % k);
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
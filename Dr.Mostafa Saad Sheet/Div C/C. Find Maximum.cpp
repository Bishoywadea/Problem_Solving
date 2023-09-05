/*
* https://codeforces.com/contest/353/problem/C
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

const double s120 = 0.8660254038;

void sol() {
	ll n, a1=0, a2=0,l=-1,m=LLONG_MAX; string s;
	cin >> n;
	vector<ll> v(n),pre,pos;
	for (auto& i : v)cin >> i;
	pos.push_back(0);
	pre.push_back(0);
	cin >> s;
	for (ll i = 0; i < n; i++) pos.push_back(pos[i] + v[i]);
	for (ll i = n-1; i >= 0; i--) pre.push_back(pre[n-i-1] + v[i]*(s[i]-'0'));
	for (ll i = 0; i < n; i++) if (s[i] == '1') l = i;
	ll i = l, index = 0, ans = 0;
	while (i >= 0) {
		while (i >= 0 && s[i] == '1') {
			if (m > v[i]) {
				m = v[i];
				index = i;
			}
			i--;
		}
		ans = max(ans, pos[index] + pre[n-index-1]);
		i--;
	}
	cout << max(pre[n],ans);
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

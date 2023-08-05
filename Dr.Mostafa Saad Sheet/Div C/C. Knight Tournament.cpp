/*
* Link: https://codeforces.com/contest/357/problem/C
*/
#include <bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
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


bool comparePairs(const std::pair<ll, pair<ll, ll>>& a, const std::pair<ll, pair<ll, ll>>& b) {
	if (a.first == b.first) {
		return a.second.first < b.second.first;
	}
	return a.first < b.first;
}


void sol()
{
	ll n, m,x,y,z;
	cin >> n >> m;
	vector<ll> v;
	set<ll> s;
	vector<ll> ans(n + 1);
	for (ll i = 1; i <= n; i++)	s.insert(i);

	for (ll i = 0; i < m; i++){
		cin >> x >> y >> z;
		for (auto it = s.lower_bound(x); it!=s.end(); it++) {
			if (*it > y) break;
			else {
				if (*it == z)continue;
				else {
					v.push_back(*it);
					ans[*it] = z;
				}
			}
		}
		while (v.size()) {
			s.erase(v.back());
			v.pop_back();
		}
	}
	for (ll i = 1; i <= n; i++){
			cout << ans[i] << " ";
	}
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

/*
* Link: https://codeforces.com/contest/437/problem/B
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

ll target;

void sol()
{
	ll l, p = 1;
	cin >> target >> l;
	map<int, int> m;
	map<int, vector<int>> mm;
	for (int i = 1; i <= l; i++) {
		int ii = i;
		while (ii % 2 == 0 && ii > 0) {
			p *= 2;
			ii /= 2;
		}
		m[p]++;
		mm[p].push_back(i);
		p = 1;
	}
	vector<int> ans;

	for (auto it = m.crbegin(); it != m.crend();++it) {
		if (target >= it->first) {
			int minus = target / it->first;
			target -= min(it->second, minus) * it->first;
			for (int i = 0; i < min(it->second, minus); i++) {
				ans.push_back(mm[it->first].back());
				mm[it->first].pop_back();
			}
		}
	}
	if (target)
		cout << -1;
	else {
		cout << ans.size() << endl;
		for (auto i : ans)cout << i << " ";
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

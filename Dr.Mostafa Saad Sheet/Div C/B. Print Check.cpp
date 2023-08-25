/*
* https://codeforces.com/contest/631/problem/B
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

void sol() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<int>> v(n, vector<int>(m,0));
	vector <pair<int, pair<int, int>>> quer(k);
	vector<bool> r(n,0), c(m,0);
	for (auto& i : quer) cin >> i.first >> i.second.first >> i.second.second;
	for (int i = k-1; i >= 0; i--){
		if (quer[i].first == 1 && !r[quer[i].second.first-1]){
			for (auto j = 0; j < m; j++) if (!v[quer[i].second.first - 1][j]) v[quer[i].second.first - 1][j] = quer[i].second.second;
		}
		else if (quer[i].first == 2 && !c[quer[i].second.first - 1]) {
			for (auto j=0; j < n; j++) if(!v[j][quer[i].second.first - 1]) v[j][quer[i].second.first - 1] = quer[i].second.second;
		}
	}

	for (auto& i : v) {
		for (auto& j : i)cout << j<<" ";
		cout << endl;
	}
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

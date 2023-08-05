/*
* Link: https://codeforces.com/contest/580/problem/C
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

vector<vector<int>> tree;
vector<int> danger;
vector<bool> visited;
ll n, m, x, y, ans = 0;

void dfs(int v, int r) {
	if (visited[v])
		return;
	visited[v] = 1;
	danger[v] ? r += danger[v] : r = 0;
	if (r > m) return;
	else {
		if (tree[v].size()>1 || v==0)
			for (auto i : tree[v]) dfs(i, r);
		else
			ans++;
	}
}

void sol()
{
	cin >> n >> m;
	tree.resize(n);
	visited.resize(n, 0);
	danger.resize(n);
	for (auto& i : danger)cin >> i;
	for (ll i = 0; i < n-1; i++){
		cin >> x >> y;
		tree[y-1].push_back(x-1);
		tree[x - 1].push_back(y - 1);

	}
	dfs(0, 0);
	cout << ans;
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

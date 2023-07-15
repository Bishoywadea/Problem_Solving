/*
* Link:https://codeforces.com/problemset/problem/486/B
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
#define vii  vector<pair<int,int>>
#define vvi  vector<vector<char>>
#define vi  vector<int>
#define out  {cout << "0"; return;}
#define all(x) x.begin(),x.end()
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

int dx[] = { 1 , 0,-1,0,1,-1,1,-1 };
int dy[] = { 0 , 1,0,-1,1,-1,-1,1 };

void Fasto()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void sol()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m, 1));
	vector<vector<int>> g(n, vector<int>(m, 1));
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> g[i][j];
			if (g[i][j] == 0) {
				for (auto& k : v[i]) k = 0;
				for (int k = 0; k < n; k++)v[k][j] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			bool tmam = 1;
			if (g[i][j] == 1) {
				tmam = 0;
				for (auto& k : v[i]) if (k == 1) tmam = 1;
				for (int k = 0; k < n; k++) if(v[k][j]==1) tmam = 1;
			}
			if (!tmam) {
				cout << "NO"; return;
			}
		}
	}
	cout << "YES\n";
	for (auto i : v) {
		for (auto k : i) cout << k << " ";
		cout << endl;
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
		//cout << endl;
		//cout.flush();
	}
	return 0;
}
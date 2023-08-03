/*
* Link: https://codeforces.com/contest/479/problem/B
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

void sol()
{
	int n, k;
	cin >> n >> k;
	vector<pair<ll,ll>> v(n);
	vector<pair<int, int>> ans;
	for (int i = 0; i < n; i++) cin >> v[i].first, v[i].second=i + 1;
	sort(all(v));
	for (int i = 0; i < k; i++) {
		if (v[0].first != v[n - 1].first) {
			v[0].first++;
			v[n - 1].first--;
			ans.push_back({ v[n - 1].second,v[0].second });
		}
		sort(all(v));
		if (v[0].first == v[n - 1].first) break;
	}
	cout << v[n - 1].first - v[0].first << " " << ans.size()<<endl;
	for (auto i : ans) cout << i.first << " " << i.second << endl;
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

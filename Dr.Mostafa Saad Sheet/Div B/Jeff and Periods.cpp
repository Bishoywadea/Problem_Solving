
/*
* Link:https://codeforces.com/contest/352/problem/B
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
	int n,x,ans=0;
	cin >> n;
	map<int, pair<int,int>> m;
	vii p;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (m.find(x) != m.end()) {
			pair<int, int> y = m[x];
			if (y.second == -1) continue;
			if (y.second != 0&& i - y.first == y.second) {
				m[x] = { i,y.second };
			}
			else if (y.second != 0 && i - y.first != y.second) {
				m[x] = { i,-1 };
				ans--;
			}
			else if (y.second == 0) {
				m[x] = { i,i-y.first };
			}
		}
		else {
			m[x] = { i,0 };
			ans++;
		}
	}
	cout << ans<<endl;
	for (auto i : m)
		if (i.second.second != -1)
			cout << i.first << " " << i.second.second<<endl;
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
/*
* Link: https://codeforces.com/contest/550/problem/B
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
	ll n, l, r, x,z=0,ma=0,mi=LLONG_MAX,ans=0;
	cin >> n >> l >> r >> x;
	vector<ll> vec(n);
	for (auto& i : vec) cin >> i;
	for (int i = 0; i < (1 << n); i++) {
		ma = 0, mi = LLONG_MAX,z=0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				if (vec[j] > ma) ma = vec[j];
				if (vec[j] < mi) mi = vec[j];
				z += vec[j];
			}
		}
		if (z >= l && z <= r && ma - mi >= x)
			ans++;
	}
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
		//cout << endl;
		//cout.flush();
	}
	return 0;
}
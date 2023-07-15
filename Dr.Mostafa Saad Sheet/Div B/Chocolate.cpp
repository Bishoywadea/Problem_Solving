
/*
* Link:https://codeforces.com/contest/617/problem/B
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

double getD(ll x1, ll x2, ll y1, ll y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void sol()
{
	ll x, n;
	cin >> n;
	ll ans = 0, w = 0, c = 1;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x && !ans)ans = 1;
		if (!x && ans)c++;
		else {
			ans *= c;
			c = 1;
		}
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
		cout << endl;
		//cout.flush();
	}
	return 0;
}
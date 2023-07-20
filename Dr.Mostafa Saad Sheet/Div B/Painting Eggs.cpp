/*
* Link: https://codeforces.com/contest/282/problem/B
*/
#include<bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include<algorithm>
using namespace std;
const double PI = 3.14159265358979323846;
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
	int n, a, g;
	cin >> n;
	string ans = "";

	ll ac = 0, gc = 0;

	while (n--) {
		cin >> a >> g;
		if (abs((ac + a) - gc) <= 500) ac += a, ans += 'A';
		else gc += g, ans += 'G';
	}

	if (abs(ac - gc) <= 500) cout << ans;
	else cout << -1;
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

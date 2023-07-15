/*
* Link: https://codeforces.com/contest/621/problem/B
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

ull combination(ull n) {
	if (2 > n) return 0;
	return (n*(n-1)) / (2);
}

void sol()
{
	ull n,x,y,ans=0;
	cin >> n;
	vector<ull> h(2 * 2020),v(2*2020);
	for (ull i = 0; i < n; i++){
		cin >> x >> y;
		h[x - y+2001]++;
		v[x + y+2001]++;
	}
	for (ull i = 0; i < h.size(); i++)
	{
		if(h[i]>1)
			ans += combination(h[i]);
		if (v[i] > 1)
			ans += combination(v[i]);
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
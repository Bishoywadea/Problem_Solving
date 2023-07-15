
/*
* Link:https://codeforces.com/contest/144/problem/B
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
	ll xa, ya, xb, yb,n,x,y,r,w=0,t=0;
	cin >> xa >> ya >> xb >> yb >> n;
	vector<pair<ll, pair<ll, ll>>> v(n);
	for (auto& i : v)
		cin >> i.second.first >> i.second.second >> i.first;

	for (int i = min(xa,xb); i <= max(xa, xb); i++){
		t += 2;
		bool c1 = 0, c2 = 0;
		for (int j = 0; j < n; j++){
			if (getD(i, v[j].second.first, ya, v[j].second.second) <= v[j].first)
				c1 = 1;
			if (getD(i, v[j].second.first, yb, v[j].second.second) <= v[j].first)
				c2 = 1;
			if (c1 && c2)
				break;
		}
		w += c1;
		w += c2;
	}
	for (int i = min(ya, yb)+1; i <= max(ya, yb)-1; i++) {
		t += 2;
		bool c1 = 0, c2 = 0;
		for (int j = 0; j < n; j++) {
			if (getD(xa, v[j].second.first, i, v[j].second.second) <= v[j].first)
				c1 = 1;
			if (getD(xb, v[j].second.first, i, v[j].second.second) <= v[j].first)
				c2 = 1;
			if (c1 && c2)
				break;
		}
		w += c1;
		w += c2;
	}
	cout << t-w;

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
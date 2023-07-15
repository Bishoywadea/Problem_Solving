/*
* Link:https://codeforces.com/contest/141/problem/B
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
	int a, x, y;
	cin >> a >> x >> y;
	if (y % a == 0) { cout << -1; return; }
	if (y / a == 0 && x > -0.5 * a && x < 0.5 * a) {
		cout << 1; return;
	}
	if (y / a == 1&&x > -0.5 * a && x < 0.5 * a) {
		cout << 2; return;
	}
	else {
		if ((y / a) % 2 == 0 && (y / a) != 0) {
			if (x > 0 && x < a) cout << 4 + (((y / a) / 2 - 1) * 3);
			else if (x < 0 && x > -1 * a) cout << 3 + (((y / a) / 2 - 1) * 3);
			else cout << -1;
		}
		else {
			if (x > -0.5 * a && x < 0.5 * a) cout << 5 + (((y / a) / 2 - 1) * 3);
			else cout << -1;
		}
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
/*
* Link: https://codeforces.com/contest/276/problem/B
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
	string s;
	cin >> s;
	ll m, x;
	cin >> m;
	vector<ll> v(s.size() + 1);
	for (int i = 0; i < m; i++) {
		cin >> x;
		x--;
		v[x]++;
		v[s.size() - x]--;
	}
	for (int i = 1; i <= s.size(); i++)
		v[i] += v[i - 1];

	for (int i = 0; i < s.size(); i++){
		if (v[i] % 2)
			cout << s[s.size() - i - 1];
		else
			cout << s[i];

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
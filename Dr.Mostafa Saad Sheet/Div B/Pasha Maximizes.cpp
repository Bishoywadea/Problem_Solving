/*
* Link: https://codeforces.com/contest/435/problem/B
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
	ll n,ma=0,cur=1;
	char c;
	string s;
	cin >> s >> n;
	for (int i = 0; i < s.size(); i++)
	{
		bool f = 0;
		ma = i;
		cur = i + 1;
		while (cur - i <= n && cur<s.size()) {
			if (s[cur] > s[ma]) {
				ma = cur;
				f = 1;
			}
			cur++;
		}
		if (f) {
			c = s[ma];
			s.erase(s.begin() + ma);
			s.insert(s.begin() + i, c);
			n -= (ma - i);
		}
	}	
	cout << s;
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

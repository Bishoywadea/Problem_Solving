/*
* Link:https://codeforces.com/contest/614/problem/B
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
	string s,ans,zeros="";
	bool o = 0, f = 1;
	int skip = 0;
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++){
		o = 0,skip=0;
		cin >> s;
		if (s == "0") f = 0,ans="0";
		if (f) {
			if(skip==0)
				for (int i = 0; i < s.size(); i++){
					if ((s[i] != '1' && s[i] != '0') || (s[i] == '1' && o)) {
						ans = s;
						skip = 1;
						break;
					}
					if (s[i] == '1' && !o) o = 1;
				}
			if(skip!=1) zeros.append( s.size() - 1,'0');
			if (skip == 1) skip = 2;
		}
		
	}
	if (!f)
		cout << 0;
	else {
		if (ans == "")
			cout << '1' + zeros;
		else
			cout << ans + zeros;
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
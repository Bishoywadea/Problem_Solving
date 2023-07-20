/*
* Link: https://codeforces.com/contest/1009/problem/B
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
	string s,ans="";
	ll count0 = 0,ones=0,later=0;
	cin >> s;
	ll i = 0;
	while (s[i] != '2' && i<s.size()) { if (s[i] == '0') { count0++; } i++; }
	later = i;
	i = 0;
	while (i < s.size()) { if (s[i] == '1') { ones++; } i++; }
	ans.append(count0, '0');
	ans.append(ones, '1');
	for (ll i = later; i < s.size(); i++) if (s[i] == '2' || s[i] == '0') ans.push_back(s[i]);
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

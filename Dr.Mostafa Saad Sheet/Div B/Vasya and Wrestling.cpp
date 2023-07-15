/*
* Link:https://codeforces.com/problemset/problem/486/B
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
	int n, x,fi=0,se=0,last;
	vector<int> f, s;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		(x > 0) ? (f.push_back(x), fi += x) : (s.push_back(x), se += abs(x));
		if (i == n - 1) last = x;
	}
	if (fi == se) {
		int i = 0;
		while (i < min(f.size(), s.size())) {
			if (f[i] == abs(s[i])) { i++; continue; }
			if (f[i] > abs(s[i])) {cout << "first"; return;}
			else {cout << "second"; return;}
			i++;
		}
		if(f.size()>s.size()) { cout << "first"; return; }
		else if (f.size() < s.size()) { cout << "second"; return; }
		if(last>0) { cout << "first"; return; }
		else { cout << "second"; return; }
	}
	fi > se ? cout << "first" : cout << "second";	
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
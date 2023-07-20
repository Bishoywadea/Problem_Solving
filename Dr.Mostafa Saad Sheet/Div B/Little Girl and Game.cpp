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

vi c(26);

bool isP(string s) {
	int odd = 0, even = 0;
	for (int i = 0; i < 26; i++)
		if (c[i] % 2 == 1) odd++;

	if (odd > 1)
		return 0;
	else
		return 1;
}

void sol()
{
	bool g = 0,f=1;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) c[s[i] - 'a']++;
	while (1) {
		if (isP(s))
			break;
		g = !g;
		f = 1;
		for (int i = 0; i < 26; i++)
			if (c[i] % 2 == 0 && c[i]!=0) {
				f = 0; c[i]--; break;
			}
		if(f)
			for (int i = 0; i < 26; i++){
				if (c[i]) {
					c[i]--; break;
				}
			}
	}
	g ? cout << "Second" : cout << "First";
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

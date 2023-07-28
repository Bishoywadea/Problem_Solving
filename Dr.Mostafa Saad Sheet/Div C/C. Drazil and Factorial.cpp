/*
Link: https://codeforces.com/contest/515/problem/C
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
#define ld  long double
#define ull  unsigned long long
#define vii  vector<pair<int,int>>
#define vvi  vector<vector<char>>
#define vi  vector<int>
#define out  {cout << "0"; return;}
#define all(x) x.begin(),x.end()
#define allinv(x) x.rbegin(),x.rend()
bool isWholeNumber(double number) { return number == static_cast<int>(number); }
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

int dx[] = { 1, 0, -1, 0, 1, -1, 1, -1 };
int dy[] = { 0, 1, 0, -1, 1, -1, -1, 1 };

void Fasto()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void sol()
{
	int n; map<int, int> m;
	cin >> n;
	string s,ans="";
	vector<int> v(10);
	cin >> s;
	for (int i = 0; i < n; i++){
		int c = s[i]-'0';
		if (c == 2) ans += "2";
		else if (c == 3) ans += "3";
		else if (c == 4) ans += "223";
		else if (c == 5) ans += "5";
		else if (c == 6) ans += "35";
		else if (c == 7) ans += "7";
		else if (c == 8) ans += "2227";
		else if (c == 9) ans += "3327";
	}
	sort(allinv(ans));
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

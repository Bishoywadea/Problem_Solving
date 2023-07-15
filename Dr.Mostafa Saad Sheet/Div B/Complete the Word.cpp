
/*
* Link:https://codeforces.com/contest/716/problem/B
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
	string s,sub;
	bool can = 0;
	int x=0,start=0;
	cin >> s;
	set<char> st;
	int know = s.size() - 26;
	for (int i = 0; i <= know;i++) {
		x = 0;
		st.clear();
		sub = s.substr(i, 26);
		for (int j = 0; j < 26; j++)
			if (sub[j] == '?') x++;
			else st.insert(sub[j]);
		if (st.size() + x == 26) {
			can = 1;
			start = i;
			break;
		}
	}
	if (can) {
		vector<char> v;
		for (int i = 0; i < 26; i++)
			if (st.find(i + 'A') == st.end()) v.push_back(i + 'A');
		for (int i = start; i < start+26; i++)
			if (s[i] == '?') {
				s[i] = v.back();
				v.pop_back();
			}
		for (int i = 0; i <s.size(); i++) {
			if (s[i] == '?') s[i]='A';
		}
		cout << s;
		return;
	}
	cout << -1;
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
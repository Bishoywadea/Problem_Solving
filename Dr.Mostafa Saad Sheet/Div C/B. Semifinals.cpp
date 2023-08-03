/*
* Link: https://codeforces.com/contest/378/problem/B
*/
#include<bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include<algorithm>
using namespace std;
const double PI = 3.14159265358979323846;
#define MOD 1000000000 + 7 
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
	ll n,x,y;
	cin >> n;
	vector<pair<ll, pair<ll, ll>>> t;
	string s1, s2;
	s1.resize(n, '0');
	s2.resize(n, '0');
	for (ll i = 0; i < n; i++){
		cin >> x >> y;
		t.push_back({ x,{1,i} });
		t.push_back({ y,{2,i} });
	}
	sort(all(t));
	for (ll i = 0; i < n/2; i++) s1[i] = '1', s2[i] = '1';
	ll i = 0;
	while(i<n){
		if (t[i].second.first == 1) { s1[t[i].second.second] = '1', i++; }
		else { s2[t[i].second.second] = '1', i++;}
	}
	cout << s1 << "\n" << s2;
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

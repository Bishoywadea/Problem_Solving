/*
* Link: https://codeforces.com/contest/602/problem/B
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
	ll n,a=0;
	cin >> n;
	vector<ll> v(n);
	vector<pair<ll,ll>> ans(n);
	for (auto& i : v) cin >> i;
	ans[0]={ 1,1 };
	for (int i = 1; i < n; i++){
		if (v[i] > v[i - 1]) {
			ans[i].second = ans[i - 1].first + 1;
			ans[i].first = + 1;

		}
		else if (v[i] < v[i - 1]) {
			ans[i].first = ans[i - 1].second + 1;
			ans[i].second = +1;
		}
		else if (v[i] == v[i - 1]) {
			ans[i].first = ans[i - 1].first + 1;
			ans[i].second = ans[i - 1].second + 1;
		}
	}
	for (auto& i : ans)
		a = max(a, max(i.first, i.second));
	cout << a;
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
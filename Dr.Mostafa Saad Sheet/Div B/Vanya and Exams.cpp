/*
* Link: https://codeforces.com/contest/492/problem/C
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

bool comparePairs(const std::pair<ll, ll>& a, const std::pair<ll, ll>& b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	return a.first < b.first;
}

void sol()
{
	ll n, ma, avg,x,y,get=0,ans=0;
	cin >> n >> ma >> avg;
	vector<pair<ll, ll>> v;
	for (ll i = 0; i < n; i++) {
		cin >> x >> y;
		get += x;
		if(ma-x!=0)
			v.push_back({ y,ma - x });
	}
	sort(all(v), comparePairs);
	ll req = (avg * n) - (get);
	ll index = 0;
	while (req > 0) {
		if (v[index].second <= req) {
			ans += v[index].second * v[index].first;
 			req -= v[index].second;
		}
		else{
			ans += req  * v[index].first;
			req = 0;

		}
		index++;
	}
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

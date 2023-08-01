/*
* Link: https://codeforces.com/contest/296/problem/C
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
	ll n, m, k,x,y;
	cin >> n >> m >> k;
	vector<ll> v(n);
	vector<ll> plus(n+1,0);
	vector<tuple<ll, ll, ll>> op(m);
	vector<int> numoper(m+1);
	for (auto& i : v)cin >> i;
	v.push_back(0);
	for (auto& i : op)cin >> get<0>(i) , cin>> get<1>(i)>> get<2>(i);
	for (int i = 0; i < k; i++){
		cin >> x >> y;
		x--;
		numoper[x]++;
		numoper[y]--;
	}
	for (ll i = 1; i < m; i++) numoper[i] += numoper[i - 1];
	for (ll i = 0; i < m; i++) {
		plus[get<0>(op[i])-1] += numoper[i] * get<2>(op[i]);
		plus[get<1>(op[i])] -= numoper[i] * get<2>(op[i]);
	}
	for (ll i = 1; i < n; i++) plus[i] += plus[i-1];
	for (ll i = 0; i < n; i++)cout << v[i]+plus[i] << " ";
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

/*
* Link:https://codeforces.com/contest/186/problem/B
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
#define out  {cout << "NO"; return;}
#define all(x) x.begin(),x.end()
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

void Fasto()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

bool comparePairs(pair<double, int>& a,pair<double, int>& b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}

void sol()
{
	int n, t1, t2, k,a,b;
	cin >> n >> t1 >> t2 >> k;
	vector<pair<double, int>> v(n);
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		v[i].first = max(a * t1 * (1 - k / 100.0) + b * t2, b * t1 * (1 - k / 100.0) + a * t2);
		v[i].second = i+1;
	}
	sort(all(v), comparePairs);
	for (auto i : v)
		cout << i.second << " " << fixed << setprecision(2)<<i.first <<endl;
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
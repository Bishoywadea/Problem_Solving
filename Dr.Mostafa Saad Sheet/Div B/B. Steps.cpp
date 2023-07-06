/*
* Link:https://codeforces.com/contest/152/problem/B
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


void sol()
{
	ll n, m, x, y, k, ans = 0, dx, dy, q, w;
	cin >> n >> m >> x >> y >> k;
	for (int i = 0; i < k; i++) {
		cin >> dx >> dy;
		if (dx > 0)
			q = (n - x) / abs(dx);
		else if (dx < 0)
			q = (x - 1) / abs(dx);
		else if (dx == 0)
			q = 16639254512;
		if (dy > 0)
			w = (m - y) / abs(dy);
		else if (dy < 0)
			w = (y - 1) / abs(dy);
		else if (dy == 0)
			w = 16639254512;
		q = min(w, q);
		x += (dx * q);
		y += (dy * q);
		ans += q;
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
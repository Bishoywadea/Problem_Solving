/*
* Link:https://codeforces.com/contest/148/problem/B
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
#define out  {cout << "0"; return;}
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
	double vp, vd, t, f, c,distance=0,ans=0;
	cin >> vp >> vd >> t >> f >> c;
	if (vp >= vd) out;
	distance = vp * t;
	distance += ((distance / (vd - vp)) * vp);
	while (distance < c) {
		ans++;
		double distanceWhenDragonBack = distance + vp * (distance / vd + f);
		distance = distanceWhenDragonBack + vp * (distanceWhenDragonBack / (vd - vp));
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
		//cout << endl;
		//cout.flush();
	}
	return 0;
}
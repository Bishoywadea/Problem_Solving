/*
* Link: https://codeforces.com/contest/1030/problem/B
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

pair<double, double> rotateClockwise(pair<int, int> original, pair<int, int>  center) {
	pair<double, double> rotated;
	double cosTheta = cos(-1 * 45 * PI / 180.0);
	double sinTheta = sin(-1 * 45 * PI / 180.0);
	rotated.first = (original.first - center.first) * cosTheta - (original.second - center.second) * sinTheta + center.first;
	rotated.second = (original.first - center.first) * sinTheta + (original.second - center.second) * cosTheta + center.second;
	return rotated;
}

void sol()
{
	int n, d, m, x, y;
	pair<double, double> r;
	cin >> n >> d >> m;
	double khra1 = round((sqrt(2 * pow(n - d, 2)) + d) * 1000000.0) / 1000000.0;
	double khra2 = round(sqrt(2 * pow(d, 2)) * 1000000.0) / 1000000.0;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		r = rotateClockwise({ x,y }, { d,0 });
		r.first = round(r.first * 1000000.0) / 1000000.0;
		r.second = round(r.second * 1000000.0) / 1000000.0;
		if (r.first <= khra1 && r.first >= d && r.second <= khra2 && r.second >= 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
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

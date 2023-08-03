/*
* Link: https://codeforces.com/contest/88/problem/C
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
	ll a, b,p,cur=0,nxta=0,nxtb,m=0,d=0;
	cin >> a >> b;
	nxta = a;
	nxtb = b;
	p = a * b;
	while (cur < p) {
		if (nxta - cur < nxtb - cur) {
			d += nxta - cur;
			cur = nxta;
			nxta += a;
		}
		else if (nxta - cur > nxtb - cur) {
			m += nxtb - cur;
			cur = nxtb;
			nxtb += b;
		}
		else if (a > b) {
			d += nxta - cur;
			cur = nxta;
			nxta += a;
			nxtb += b;
		}
		else if (a < b) {
			m += nxtb - cur;
			cur = nxta;
			nxtb += b;
			nxta += a;
		}
	}
	m > d ? cout << "Masha" : m == d ? cout << "Equal" : cout << "Dasha";
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

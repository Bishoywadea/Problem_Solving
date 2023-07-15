/*
* Link:https://codeforces.com/contest/369/problem/B
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
	double n, k, l, r, sa, sk;
	cin >> n >> k >> l >> r >> sa >> sk;
	while((sa - sk) / ((n - k) * l) > 1)
		l++;
	int in = 0,x= ((n - k) * l);
	while ((sa - sk) - x != 0) {
		x--;
		in++;
	}

	for (int i = 0; i < in; i++) cout << l - 1<<" ";
	for (int i = 0; i < n-k-in; i++) cout << l << " ";

	while (sk / (k * l) > 1) l++;
	in = 0, x = (k * l);
	while (sk - x != 0) {
		x--;
		in++;
	}
	for (int i = 0; i <in; i++) cout << l-1 << " ";
	for (int i = 0; i < k-in; i++) cout << l << " ";
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
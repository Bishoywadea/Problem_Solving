/*
* Link: https://codeforces.com/contest/71/problem/C
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
	ll n;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v)cin >> i;
	ll i = n;
	ll target = n;
	int count = 2;
	while(i>2){
		ll g = ((n - i)/i+1LL);
		for (int j = 0; j < g+1; j++){
			int take = 1;
			int cur = j;
			if (!v[j]) continue;
			while (v[(cur + g)%n] && take < i && (cur+g)%n!=j) {
				cur += g;
				take++;
			}
			if (take == i) {
				cout << "YES"; return;
			}
		}
		while (target % count!=0)count++;
		i =target / count;
		count++;
	}
	cout << "NO";
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

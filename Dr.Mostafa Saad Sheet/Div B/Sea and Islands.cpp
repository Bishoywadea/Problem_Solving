
/*
* Link:https://codeforces.com/contest/544/problem/B
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

double getD(ll x1, ll x2, ll y1, ll y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void sol()
{
	int n,k;
	cin >> n >> k; vector<vector<char>> grid(n, vector<char>(n, 'S'));
	for (int i = 0; i < n; i++){
		for (int j = i%2; j < n; j++){
			if (k > 0) {
				grid[i][j] = 'L';
				j++;
				k--;
			}
		}
	}
	if (!k) {
		cout << "YES" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << grid[i][j];
			}
			cout << endl;
		}
	}
	else
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
		//cout << endl;
		//cout.flush();
	}
	return 0;
}
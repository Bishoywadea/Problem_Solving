/*
* Link:https://codeforces.com/contest/400/problem/B
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
	char c;
	int n, m,candyIN=0,dwarfIN=0,ans=1;
	bool fd = 0,OK=1;
	cin >> n >> m;
	vector<int> moves(n);
	for (int i = 0; i < n; i++){
		for (int i = 0; i < m; i++){
			cin >> c;
			if (c == 'S' && !fd)
				OK = 0;
			else if (c == 'S' && fd)
				candyIN = i;
			else if (c == 'G') fd = 1, dwarfIN = i;
		}
		moves[i] = candyIN - dwarfIN;
		fd = 0;
	}
	if (OK) {
		sort(all(moves));
		for (int i = 0; i < n-1; i++)
			if (moves[i] != moves[i + 1])
				ans++;
		cout << ans;
	}
	else
		cout << -1;
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
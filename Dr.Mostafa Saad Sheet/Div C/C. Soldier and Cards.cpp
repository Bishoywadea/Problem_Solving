/*
* Link: https://codeforces.com/contest/546/problem/C
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
	int n,p1,p2,x,c=0;
	cin >> n >> p1;
	queue<int> q1, q2;
	for (size_t i = 0; i < p1; i++){
		cin >> x;
		q1.push(x);
	}
	cin >> p2;
	for (size_t i = 0; i < p2; i++) {
		cin >> x;
		q2.push(x);
	}
	while (q1.size() && q2.size() && c<=(p1*p2*n)) {
		if (q1.front() > q2.front()) {
			q1.push(q2.front());
			q2.pop();
			q1.push(q1.front());
			q1.pop();
		}
		else if (q1.front() < q2.front()) {
			q2.push(q1.front());
			q1.pop();
			q2.push(q2.front());
			q2.pop();
		}
		else
			break;
		c++;
	}
	if (q1.size() && !q2.size())
		cout << c << " " << 1;
	else if (!q1.size() && q2.size())
		cout << c << " " << 2;
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

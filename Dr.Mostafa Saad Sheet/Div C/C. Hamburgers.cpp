/*
* Link: https://codeforces.com/contest/371/problem/C
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

string s;
ll nb, nc, ns;
ll pb, pc, ps;
ll cb=0, cc=0, cs=0;
ll money;

bool ok(ll m) {
	ll h = money;
	if(cb>0)
		h -= max(0*1LL,m * cb - (nb * pb));
	if (cs > 0)
		h -= max(0 * 1LL,m * cs - (ns * ps));
	if (cc > 0)
		h -= max(0 * 1LL, m * cc - (nc * pc));
	return (h >= 0);
}

void sol()
{
	cin >> s;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> money;
	for (size_t i = 0; i < s.size(); i++){
		if (s[i] == 'B') cb += pb;
		else if (s[i] == 'S') cs += ps;
		else cc += pc;
	}

	ll l = 0, r = nb + nc + ns + money,ans=0;
	while (l <= r) {
		ll mid = l + (r - l) / 2;
		if (ok(mid)) {
			ans = mid;
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
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

/*
* Link:https://codeforces.com/contest/262/problem/B
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
#define vi  vector<int>
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
	ll n, k,ans=0;
	cin >> n >> k;
	vi v(n);
	for (auto& i : v) cin >> i,ans+=i;
	sort(all(v));
	if (n == 1) {
		(k % 2) ? (cout<<-1*v[0]) : (cout <<  v[0]);
		return;
	}
	int index = 0;
	while(k>0 && index<n){
		if (v[index] < 0) {
			ans += (-1 * 2 * v[index]);
			index++;
			k--;
		}
		else
			break;
	}
	if (index == n)
		index--;
	if (v[index] == 0) {
		cout << ans;
		return;
	}
	else {
		if(index==0)
			(k % 2) ? ans -= 2*v[index] : ans = ans;
		else if (index != 0)
			(k % 2) ? ans -= 2*min(abs(v[index]),abs(v[index-1])) : ans = ans;
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
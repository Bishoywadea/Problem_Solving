/*
* Link: https://codeforces.com/contest/518/problem/B
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
    string s, tt;
    cin >> s >> tt;
    map<char, int> t;
    for (char c = 'A'; c <= 'Z'; c++) {
        t[c] = 0;
        t[tolower(c)] = 0;
    }
    for (auto i : tt) t[i]++;
    int y = 0, w = 0;
    for (auto& i : s) {
        if (t[i]) { t[i]--; y++; i = '@'; }
    }
    for (auto i : s) {
        if (i == '@') continue;
        char k;
        if (islower(i)) k = toupper(i);
        else k = tolower(i);
        if (t[k] > 0) { t[k]--; w++; }
    }

    cout << y << ' ' << w;
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

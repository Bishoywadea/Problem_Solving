/*
* Link:https://codeforces.com/contest/791/problem/B
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

vector<vector<long long> >v;
long long x, y, n, m, c;
bool vis[150005];
void dfs(int node)
{
	vis[node] = 1, x++;
	for (auto i : v[node]){
		y++;
		if (!vis[i]) dfs(i);
	}
}

void sol()
{
    cin >> n >> m;
    v.resize(n + 5);
    while (m--)
    {
        cin >> x >> y;
        x--, y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (long long i = 1; i <= n; i++)
        if (!vis[i])
        {
            x = 0, y = 0, dfs(i);
            c = x * (x - 1) / 2;
            y /= 2;
            if (y != c)
            {
                cout << "NO";
                return;
            }
        }
    cout << "YES";
    return;
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
/*
* Link:https://codeforces.com/contest/510/problem/B
*/#include<bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include<algorithm>
using namespace std;
const double pi = 3.14159265358979323846;
#define MOD 1000000000 
#define ll  long long
#define ull  unsigned long long
#define all(x) x.begin(),x.end()
#define nw(n) ll*v=new ll[n]

void Fasto()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

bool f = 0;
int n, m;
char target;
int dx[] = { 1 , 0,-1,0 };
int dy[] = { 0 , 1,0,-1 };
vector<vector<char>> matrix;
int r, c;
map<pair<ll, ll>, ll> visited;
void DFS(int r, int c, int d, int z)
{
	if (f)
		return;
	if (!visited[{r, c}])
		visited[{r, c}] = z;
	if (z - visited[{r, c}] >= 4 && matrix[r][c] == target){
		f = 1;
		return;
	}
	else{
		for (int i = 0; i < 4; i++){
			if ((2 + i) % 4 == d)
				continue;
			int q = r + dx[i];
			int w = c + dy[i];
			if (q < 0 || q >= n || w < 0 || w >= m)
				continue;
			if (matrix[q][w] == target)
				DFS(r + dx[i], c + dy[i], i, z + 1);
		}
	}

}

void sol()
{
	char c;
	vector<char> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c;
			v.push_back(c);
		}
		matrix.push_back(v);
		v.clear();
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			target = matrix[i][j];
			visited.clear();
			DFS(i, j, 2, 1);
			if (f){
				cout << "Yes";
				return;
			}
		}
	}
	cout << "No";
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
	}
	return 0;
}
#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main() 
{
    int n,p;
	map<int, int> m;
    cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> p;
		m.insert({ p,i });
	}
	for (int i = 1; i <=n; i++)
	{
		auto it = m.find(i);
		cout << it->second << " ";
	}
}
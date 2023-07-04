#include<bits/stdc++.h>
using namespace std;
template<typename T>
T findMax(set<T> my_set)
{
	T max_element;
	if (!my_set.empty())
		max_element = *(my_set.rbegin());
	return max_element;
}
template<typename T>
T findMin(set<T> my_set)
{
	T min_element;
	if (!my_set.empty())
		min_element = *my_set.begin();
	return min_element;
}
#define ll long long
#define all(x) x.begin(),x.end()
#define nw(n) ll*arr=new ll[n]
void Fasto()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
int main()
{
	Fasto();
	ll n;
	cin >> n;
	vector<ll> v;
	nw(n+1);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		v.push_back(arr[i]);
	}
	arr[n] = 10000000000000;
	sort(all(v));
	ll start = 1, end = 1;
	ll max = 0;
	int indecator = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] != arr[i] && !indecator)
		{
			start = i+1;
			indecator = 1;
		}
		if (indecator == 1 )
		{
			if (arr[i] < arr[i + 1])
			{
				indecator = 2;
				end = i + 1;
			}
			if (arr[i] > max)
				max = arr[i];
			continue;
		}
		if (indecator == 2 && (arr[i] < max || arr[i]>arr[i+1]))
			indecator = 3;
	}
	if (indecator == 3)
		cout << "no";
	else
	{
		cout << "yes" << endl;
		cout << start << " " << end;
	}
}
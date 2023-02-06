#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,sum=0,yrsum=0,temp,count=0;
	cin >> n;
	multiset<int> s;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		s.insert(temp);
		sum += temp;
	}
	for (auto i = s.size()-1; i >= 0; i--)
	{
		if (yrsum > ceil(sum / 2))
		{
			break;
		}
		else
		{
			count++;
			yrsum+= *next(s.begin(), i);
		}
	}
	cout << count;
}
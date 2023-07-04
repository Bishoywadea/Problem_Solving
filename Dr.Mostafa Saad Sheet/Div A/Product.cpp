#include<bits/stdc++.h>
using namespace std;

int main() 
{
	vector<int> v;
	int count = 0;
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.size() < s2.size())
	{
		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = 0; j < s2.size(); j++)
			{
				if (i + j >= count)
				{
					v.push_back((s1[s1.size() - i - 1] - 48) * (s2[s2.size() - j - 1] - 48));
					count++;
				}
				else
				{
					v.at(i + j) += ((s1[s1.size() - i - 1] - 48) * (s2[s2.size() - j - 1] - 48));
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < s2.size(); i++)
		{
			for (int j = 0; j < s1.size(); j++)
			{
				if (i + j >= count)
				{
					v.push_back((s1[s1.size() - j - 1] - 48) * (s2[s2.size() - i - 1] - 48));
					count++;
				}
				else
				{
					v.at(i + j) += ((s1[s1.size() - j - 1] - 48)* (s2[s2.size() - i - 1] - 48));
				}
			}
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (i == v.size() - 1)
		{
			while (v[v.end()-v.begin()-1] >= 10)
			{
				v.push_back(v[v.end()-v.begin()-1] / 10);
			}
			v.at(i) %= 10;
		}
		else
		{
			if (v.at(i) >= 10)
			{
				v.at(i + 1) += v.at(i) / 10;
				v.at(i) %= 10;
			}
		}
	}
	for (int i = v.size()-1; i >=0; i--)
	{
		cout << v.at(i);
	}
	cout << endl;
	
}
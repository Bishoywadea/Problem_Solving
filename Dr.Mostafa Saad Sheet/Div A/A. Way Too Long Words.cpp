#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	string word;
	while (t--)
	{
		cin >> word;
		if (word.size() > 10)
		{
			cout << word[0] << word.size() - 2 << word[word.size() - 1]<<endl;
		}
		else
		{
			cout << word << endl;
		}
	}
	
	
}
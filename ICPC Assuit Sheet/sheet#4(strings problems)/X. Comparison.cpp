#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s,s1,s2,compination;
	cin >> s;
	string result = s;
	long long minimum=99999999;
	long long mini = 0;
	for (int i = 0; i < s.size()-1; i++)
	{
		s1 = s.substr(0, i + 1);
		s2 = s.substr(i + 1, s.size() - i + 2);
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		compination = s1 + s2;
		result = min(result, compination);
	}
	cout << result;
	
}
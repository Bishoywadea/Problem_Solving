#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		int l1 = s1.size();
		int l2 = s2.size();
		int mini = min(l1,l2);
		for (int i = 0; i < mini; i++)
		{
			cout << s1[i] << s2[i];
		}
		if (l1>l2){
			for (int i = mini; i < l1; i++)
			{
				cout << s1[i];
			}
		}
		else if(l2>l1){
			for (int i = mini; i < l2; i++)
			{
				cout << s2[i];
			}
		}
		else{}
		cout << endl;
	}
}




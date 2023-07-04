#include <iostream>
#include <string>

using namespace std;


int main(){
	int t; 
	string s;
    cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		if (s.size() > 10) { cout << s.at(0) << s.size() - 2 << s.at(s.size() - 1) << endl;; }
		else { cout << s<<endl; }
	}
}

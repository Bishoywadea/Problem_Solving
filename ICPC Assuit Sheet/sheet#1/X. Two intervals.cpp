#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
	long long f1, s1, f2, s2;
	cin >> f1 >> s1 >> f2 >> s2;
	if (f1 <= f2 && f2 <= s1) { cout << max(f1, f2) << " " << min(s1, s2); }
	else if (f1 >= f2 && f1 <= s2){ cout << max(f1, f2) << " " << min(s1, s2); }
	else { cout << "-1"; }
}


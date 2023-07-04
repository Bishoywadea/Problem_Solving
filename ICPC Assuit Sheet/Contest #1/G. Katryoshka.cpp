#include<iostream>
using namespace std;
int main() {
	long long e, m, b;
	long long sum = 0;
	cin >> e >> m >> b;
	if (e == 0 || b == 0) { cout << 0; }
	else if (m == 0 && !(e == 0 || b == 0)) { e = e / 2;
	cout << min(e, b);
	}
	else  {
		sum=min(m, min(e, b));
		if (sum == m && min((e-m)/2, (b-m)) == (e-m)/2) { sum = sum + (e-m) / 2; }
		else if (sum == m && min((e - m) / 2, (b - m)) == b-m) { sum = sum + b-m; }
		cout << sum;
	}
}
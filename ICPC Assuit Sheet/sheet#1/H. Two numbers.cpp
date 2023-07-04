#include<iostream>
#include <cmath>
using namespace std;
int main() {

	float n1, n2;
	cin >> n1 >> n2;
	cout << "floor " << n1 << " / " << n2 << " = " << floor(n1 / n2) << endl;
	cout << "ceil " << n1 << " / " << n2 << " = " << ceil(n1 / n2) << endl;
	cout << "round " << n1 << " / " << n2 << " = " << round(n1 / n2);
}
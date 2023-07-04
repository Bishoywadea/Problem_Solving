#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t, n, sum;
	short int i;
	cin >> t;
	while (t--) {
		cin >> n;
		i = 0;
		sum = 0;
		while (n > 0) {
			if (n % 2 == 1)
				++i;
			n = n / 2;
		}
		while (i > 0) {
			--i;
			sum += pow(2, i);
		}
		cout << sum << "\n";
	}
	return 0;
}








//######################################################################################################
//long long decTobi(int x) {
//	long long binary = 0;
//	while (x > 0)
//	{
//
//		if (x % 2 == 1) {
//			binary = (binary * 10) + 1;
//		}
//		x = x / 2;
//	}
//	return binary;
//}
//
//long long biTodeci(long long binary) {
//	long long decimalNumber = 0;
//	long long base = 1;
//	while (binary) {
//		int lastDigit = binary % 10;
//		binary = binary / 10;
//		decimalNumber += lastDigit * base;
//		base = base * 2;
//	}
//	return decimalNumber;
//}
//
//
//int main()
//{
//	int nlines;
//	cin >> nlines;
//	long long array[100];
//	for (int i = 0; i < nlines; i++)
//	{
//		cin >> array[i];
//	}
//	for (int i = 0; i < nlines; i++)
//	{
//		cout << biTodeci(decTobi(array[i])) << endl;
//	}
//}
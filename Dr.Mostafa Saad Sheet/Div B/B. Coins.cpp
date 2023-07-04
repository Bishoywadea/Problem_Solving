#include<bits/stdc++.h>
using namespace std;


int main()
{
	int arr[3] = { 0 };
	int i, n = 3, k, j;
	char chara = 'A', charb = 'B', charc = 'C', test, x, y;
	while (n--) {

		cin >> x >> test >> y;
		if (test == '>') {
			k = x - 65;
			arr[k] = arr[k] + 1;

		}

		else {
			k = y - 65;
			arr[k] = arr[k] + 1;

		}

	}
	if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
		cout << "Impossible";
		return 0;
	}



	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == arr[j])  putchar('A' + j);

		}
	}
	return 0;
}


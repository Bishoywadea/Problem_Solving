#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int size;
	cin >> size;
	int arr[100009];
	int arr2[100009];
	for (int i = 0; i < size; i++) {
		int value;
		cin >> value;
		arr[i] = value;
		arr2[i] = value;
	}
	int temp = 0;
	int counter = 0;
	int temp2 = 0;
	int counter2 = 1;
	arr2[0] *= -1;
	for (int i = 0; i < size; i++) { 
		if (i == 0) {
			temp = arr[i];  
			temp2 = arr2[i];  
		}
		else {
			if ((temp > 0 && arr[i] > 0) || (temp < 0 && arr[i] < 0)) {
				arr[i] *= -1;
				counter++;
			}
			if ((temp2 > 0 && arr2[i] > 0) || (temp2 < 0 && arr2[i] < 0)) {
				arr2[i] *= -1;
				counter2++;
			}
			temp = arr[i];
			temp2 = arr2[i];
		}
	}
	if (counter < counter2) {
		cout << counter << endl;
	}
	else {
		cout << counter2 << endl;
	}

}

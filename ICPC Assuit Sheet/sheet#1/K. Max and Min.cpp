#include<iostream>
using namespace std;
int main() {

	long long array[3];
	long long max, min;

	for (int i = 0; i < 3; i++)
	{
		cin >> array[i];
	}
	max = min = array[0];
	for (size_t i = 1; i < 3; i++)
	{
		if (max < array[i]) {
			max = array[i];
		}
		if (min>array[i])
		{
			min = array[i];
		}
	}

	cout << min << " " << max;
}

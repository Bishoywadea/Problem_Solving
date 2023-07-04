#include <iostream>
using namespace std;

void maxFinder(long long arr[], int size) {
	long long max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
	}
	cout << max << " ";
}

int main() {
	int t;                                                             //number of test cases
	cin >> t;
	for (int c = 0; c < t; c++)                                        //loop to control number of tests 
	{
		int n;                                                         //number of array elements
		cin >> n;
		long long* arr = new long long int[n];
		for (int k = 0; k < n; k++)                                    //loop to control data entry
		{
			cin >> arr[k];
			cout << arr[k] << " ";
		}
		for (int i = 0; i < n - 1; i++)                                  //loop to control the type of subarray
		{
			int numOfsubelements = i + 2;                                       // number of elements in the subarray
			long long* subarr = new long long[numOfsubelements];
			for (int l = 0; l < ((n - numOfsubelements) + 1); l++)                  //loop to control the number of copying the subarray
			{
				int temp1 = 0;
				int temp2 = l;
				for (int j = 0; j < numOfsubelements; j++)                      // loop to control copying of subarray
				{
					subarr[temp1] = arr[temp2];
					temp1++;
					temp2++;
				}
				maxFinder(subarr, numOfsubelements);
			}

			delete[] subarr;
		}
		cout << endl;
		delete[] arr;
	}
}

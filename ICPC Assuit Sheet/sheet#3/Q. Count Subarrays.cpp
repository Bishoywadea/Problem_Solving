#include <iostream>
using namespace std;

int isDecreasing(long long arr[], int size) {
	
	long long min = arr[0];
	bool flag = true;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > min) { min = arr[i]; }
		else { flag = false; break; }
	}
	if (flag) {return 1;}
	else { return 0; }

}

int main() {
	int t;                                                             //number of test cases
	cin >> t;
	for (int c = 0; c < t; c++)                                        //loop to control number of tests 
	{
		int n;                                                         //number of array elements
		cin >> n;
		int sum=n;
		long long* arr = new long long int[n];
		for (int k = 0; k < n; k++)                                    //loop to control data entry
		{
			cin >> arr[k];
		}
		for (int i = 0; i < n - 1; i++)                                  //loop to control the type of subarray
		{
			int numOfsubelements = i + 2;                                       // number of elements in the subarray
			long long * subarr = new long long[numOfsubelements];
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
				sum =sum+ isDecreasing(subarr ,numOfsubelements);
				
			}

			delete[] subarr;
		}
		
		cout << sum<<endl;
		delete[] arr;
	}
}

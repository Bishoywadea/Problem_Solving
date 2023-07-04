#include <iostream>
#include <string>
using namespace std;

int compare(int arr[] ) {
	int arr1[3] = { 0,1,0 };
	int arr2[3] = { 1,0,1 };
	int count1 = 0, count2 = 0;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == arr1[i]) { count1++; }
		else if (arr[i]==arr2[i])
		{
			count2++;
		}
	}
	if (count1 == 3 || count2 == 3) { return 1; }
	else { return 0; }
}

int main(){
	int t;
	cin >> t;
	for (int p = 0;  p < t;  p++)
	{
		string s;
		cin >> s;
		int n = s.size();
		long long* arr = new long long int[n];
		for (int k = 0; k < n; k++)                                    //loop to control data entry
		{
			arr[k] = (int(s[k]) - 48);
		}
			int numOfsubelements = 3;                                       // number of elements in the subarray
			int* subarr = new int[numOfsubelements];
			bool flag = true;
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
				if (compare(subarr))
				{
					cout << "Good"<<endl;
					flag = false;
					break;
				}
				else
				{
					flag = true;
				}

			}
			if (flag) { cout << "Bad" << endl; }
			else{}

			delete[] subarr;

		delete[] arr;
	}
}




#include <iostream>
using namespace std;

void sorting(long long array[]){
	
	long long temp;
	for (int i = 2; i > 0; i--)
	{
		for (int i = 0; i < 2; i++)
		{
			if (array[i] > array[i + 1]) {
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
			}
		}
	}
	cout << array[0] << "\n" << array[1] << "\n" << array[2] << "\n" <<"\n";

}


int main()
{

		long long orgarray[3];
		long long copyarray[3];

		for (int i = 0; i < 3; i++)
		{
			cin >> orgarray[i];
			copyarray[i] = orgarray[i];
		}
		sorting(copyarray);

		cout << orgarray[0] << "\n" << orgarray[1]<<"\n" << orgarray[2];

		
	}
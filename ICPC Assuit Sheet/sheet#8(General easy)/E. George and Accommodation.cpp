#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int numberOfRooms, maxCapacity, currentCapacity,avialble=0;
	cin >> numberOfRooms;
	for (int i = 0; i < numberOfRooms; i++)
	{
		cin >> currentCapacity >> maxCapacity;
		if (maxCapacity - currentCapacity >= 2)
		{
			avialble++;
		}
	}
	cout << avialble;
}
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int upsetChild=0;
	char operation;
	long long currentNumberOfIceCream, numberOfPeople, temp;;
	cin >> numberOfPeople >> currentNumberOfIceCream;
	for (int i = 0; i < numberOfPeople; i++)
	{
		cin >> operation >> temp;
		if (operation == '+')
		{
			currentNumberOfIceCream += temp;
		}
		else
		{
			if (currentNumberOfIceCream - temp >= 0) { currentNumberOfIceCream -= temp; }
			else
			{
				upsetChild++;
			}
		}
	}
	cout << currentNumberOfIceCream << " " << upsetChild;
}
/*## another solution using C 
#include<stdio.h>
#include<stdlib.h>

int main()
{

	int upsetChild = 0;
	char c;
	int currentNumberOfIceCream=0, numberOfPeople, temp;
	scanf_s("%d", &numberOfPeople);
	scanf_s("%d", &currentNumberOfIceCream);
	for (int i = 0; i < numberOfPeople; i++)
	{
		scanf_s("%c", &c);
		scanf_s("%d", &temp);
		if (c == '+')
		{
			currentNumberOfIceCream += temp;
		}
		else
		{
			if (currentNumberOfIceCream - temp >= 0) { currentNumberOfIceCream -= temp; }
			else
			{
				upsetChild++;
			}
		}
	}
	printf("%d %d", currentNumberOfIceCream, upsetChild);
}
*/

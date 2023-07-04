#include<iostream>
#include<stdlib.h>
using namespace std;
int n;
int score[2] = { 0 };
enum names { sereja, dima };

void scoreCounter(int arr[],int left, int right)
{
	if (n == 0) { return; }
	else
	{
		if (n != 1)
		{
			if (arr[right] > arr[left])
			{
				score[sereja] += arr[right];
				right--;
				n--;
			}
			else
			{
				score[sereja] += arr[left];
				left++;
				n--;
			}
			if (arr[right] > arr[left])
			{
				score[dima] += arr[right];
				right--;
				n--;
			}
			else
			{
				score[dima] += arr[left];
				left++;
				n--;
			}
			scoreCounter(arr,left, right);
		}
		if (n == 1)
		{
			score[sereja] += arr[right];
			n--;
			return;
		}
	}
}

int main()
{
	cin >> n;
	int* arr;
	arr = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	scoreCounter(arr,0, n-1);
	cout << score[sereja] << " " << score[dima];
}


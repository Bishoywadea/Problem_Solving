#include<stdio.h>
#include<stdlib.h>
char cake[11][11];
int dangerCol[11]={0};

int main()
{
	int eatenCakes = 0;
	int safeCol = 0;
	int r, c,safeRows=0;
	scanf_s(" %d", &r);
	scanf_s(" %d", &c);
	for (int i = 0; i < r; i++)
	{
		int flag = 1;
		for (int j = 0; j < c; j++)
		{
			scanf_s(" %c", &cake[i][j]);
			if (cake[i][j] == 'S') { flag = 0; dangerCol[j] = 1; }
		}
		if(flag)
		{
			safeRows++;
		}
	}
	for (int i = 0; i < c; i++)
	{
		if (dangerCol[i] == 0) { safeCol++; }
	}
	eatenCakes = (safeCol * r) + (safeRows * c) - (safeCol*safeRows);
	printf("%d", eatenCakes);
}
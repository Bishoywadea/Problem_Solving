#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main()
{
	vector<int> math;
	vector<int> prog;
	vector<int> pl;
	int n;
	int numOfProg = 0, numOfMath = 0, numOfPL = 0;
	int temp;
	cin >> n;
	for (int i =1 ; i <= n ; i++)
	{
		cin >> temp;
		if (temp == 1)
		{
			prog.push_back(i);
		}
		else if (temp == 2)
		{
			math.push_back(i);
		}
		else
		{
			pl.push_back(i);
		}
	}
	int minimum = min(prog.size(), min(math.size(), pl.size()));
	cout << minimum << endl;
	while (minimum--)
	{
		cout << prog[minimum] << " " << math[minimum] << " " << pl[minimum] << endl;
		
	}
}
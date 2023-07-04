#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void countVowels(string n ,int size,int index,int numOfVowels )
{
	if (index == size) { cout<< numOfVowels; }
	else
	{
		if(n[index]=='A'|| n[index] == 'E'|| n[index] == 'U'|| n[index] == 'O'|| n[index] == 'I'|| n[index] == 'a'|| n[index] == 'e'|| n[index] == 'u'|| n[index] == 'o'|| n[index] == 'i')
		{
			numOfVowels += 1;
		}
		index += 1;
		countVowels(n, size, index, numOfVowels);
	}
}

int main() {
	string n;
	int index=0,size,numOfVowels=0;
	getline(cin, n);
	size = n.size();
	countVowels(n,size,index,numOfVowels);
}
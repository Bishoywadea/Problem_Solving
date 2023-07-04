#include <iostream>
using namespace std;

int main()
{
	int age , years=0 ,month=0 ;
	cin >> age;

	if (age >= 365) {
		years = age / 365;
		age = age - (years * 365);
	}
	if (age >=30)
	{
		month = age / 30;
		age = age- (month * 30);
		
	}

	cout << years << " years" << "\n" << month << " months" << "\n" << age << " days";
}
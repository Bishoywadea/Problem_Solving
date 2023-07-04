#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main() {
	std::string str, bigString;

	for (int i = 0; i < 2; i++) //this allows user to input no more than 2 lines.
	{
		std::cout << "\nEnter a string: ";  // <--- Added. This does need a prompt.
		std::getline(std::cin, str);

		bigString += str + "\n";
	}

	std::cout << "\n\n" << bigString << std::endl;  //Outputs the last line. I want both lines to be returned.

	return 0;  // <--- Not required, but makes a good break point.






}
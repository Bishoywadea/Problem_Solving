#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n1, n2;
    char c;
    string a;
    cin >> a;
    stringstream s1(a);
    s1 >> n1 >> c >> n2;
    if (c == '+') { cout << n1 + n2; }
    else if (c == '-') { cout << n1 - n2; }
    else if (c == '*') { cout << n1 * n2; }
    else { cout << n1 / n2; }
    
}
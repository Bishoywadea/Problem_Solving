#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string n;
    long number;
    int last, twolast;
    cin >> n;
    int size = n.size();
    if (n[0] == '-')
    {
        if (int(n[size - 1]) > int(n[size - 2]))
        {
            n.pop_back();
            cout << n;
        }
        else
        {
            n.erase(n.begin() + size-2);
            number=stoi(n);
            cout << number;
        }
    }
    else
    {
        cout << n;
    }
}
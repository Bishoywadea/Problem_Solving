#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int size = s.size();
    int index=0;
    for (int i = 0; i < size; i++)
    {
        if (s[i+1] == ' ') {
            for (int j = i; j >=index ; j--)
            {
                cout << s[j];
            }
            index = i+2;
            cout << s[i + 1];
        }
        else if(i==size-1)
        {
            for (int j = i; j >=index ; j--)
            {
                cout << s[j];
            }
        }
        }
}

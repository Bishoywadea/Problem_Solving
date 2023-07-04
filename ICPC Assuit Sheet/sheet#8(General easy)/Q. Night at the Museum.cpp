#include <iostream>
#include<string>
using namespace std;

int main()
{
    long sum = 0;
    string s;
    cin >> s;
    int size = s.size();
    if (s[0] != 'a')
    {
        if ((int(s[0]) - 97) > 13)
        {
            sum += 13 - (abs((0 - (int(s[0]) - 97)) % 13));
        }
        else
        {
            sum += abs((0 - (int(s[0]) - 97)));
        }
    }
    for (int i = 0; i < size-1; i++)
    {
        if (abs((int(s[i]) - 97) - (int(s[i+1]) - 97)) > 13)
        {
            sum += 13 - (abs((int(s[i]) - 97) - (int(s[i + 1]) - 97)) % 13);
        }
        else
        {
            sum += abs((int(s[i]) - 97) - (int(s[i + 1]) - 97));
        }
    }
    cout << sum;
}
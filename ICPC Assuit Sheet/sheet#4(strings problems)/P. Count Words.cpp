#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int size = s.size();
    bool flag = true;
    int count;
    if (!((s[0] >= 65 && s[0] <= 90) || (s[0] >= 97 && s[0] <= 122))) {  count = 0; }
    else{  count = 1; }
    for (int i = 0; i < size; i++)
    {
        if (((s[i + 1] >= 65 && s[i + 1] <= 90) || (s[i + 1] >= 97 && s[i + 1] <= 122)) && !((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))) { count++; }
    }
    cout << count;
}

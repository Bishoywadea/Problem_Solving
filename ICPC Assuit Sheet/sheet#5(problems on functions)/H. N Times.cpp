#include<iostream>
#include<algorithm>
using namespace std;

void printer(int n ,char c) {
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        printer(n, c);
    }
    
    
}

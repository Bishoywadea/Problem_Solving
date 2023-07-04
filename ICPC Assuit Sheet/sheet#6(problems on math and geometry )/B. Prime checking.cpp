#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool isPrime(long long n) {
    bool flag = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    long long n;
    cin >> n;
    if (n == 1) { cout << "NO"; }
    else
    {
        if (isPrime(n)) { cout << "NO"; }
        else
        {
            cout << "YES";
        }
    }
}
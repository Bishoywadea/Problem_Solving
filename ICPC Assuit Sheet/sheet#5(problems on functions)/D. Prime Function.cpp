#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool isPrime(long long n) {
    bool flag=false;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int t;
    long long n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n == 1) { cout << "YES"; }
        else
        {
            if (isPrime(n)) { cout << "NO" << endl; }
            else
            {
                cout << "YES" << endl;
            }
        }
        
    }

}

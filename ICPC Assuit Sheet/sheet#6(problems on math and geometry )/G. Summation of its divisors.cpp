#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long index=0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                index += i;
            }

            else
            {
                index = i + (n / i)+index;
            }

        }
    }
    cout << index;
}
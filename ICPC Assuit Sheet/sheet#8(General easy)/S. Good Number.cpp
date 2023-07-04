#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    long number=0;
    long n;
    long t;
    cin >> t;
    int count = 0;
    int k;
    cin >>k;
    while (t--)
    {
        cin >> n;
        int arr[10] = { 0 };
        while (n > 0)
        {
            if (arr[n % 10] == 0 && (n % 10) <= k)
            {
                arr[n % 10] = 1;
                count++;
            }
            n /= 10;
        }
        if (count == k+1)
        {
            number++;
        }
        count = 0;
    }
    cout << number;
}
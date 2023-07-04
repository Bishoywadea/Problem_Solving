#include<iostream>
#include<algorithm>
using namespace std;

void summation(int x, int n) {
    long long sum = 0;
    if (n%2==0){}
    else
    {
        n = n - 1;
    }
    for (int i = 2; i <= n; i=i+2)
    {
        sum = sum + pow(x, i);
    }
    cout << sum;
}

int main()
{
    int x, n;
    cin >> x >> n;
    summation(x, n);
    
}

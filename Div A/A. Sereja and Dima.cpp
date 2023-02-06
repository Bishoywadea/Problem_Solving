#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sumser=0, sumdej = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int* start = arr;
    int* end = &arr[n-1];
    for (int i = 0; i < n/2; i++)
    {
        if (*start > *end)
        {
            sumser += *start;
            start++;
        }
        else
        {
            sumser += *end;
            end--;
        }
        if (*start > *end)
        {
            sumdej += *start;
            start++;
        }
        else
        {
            sumdej += *end;
            end--;
        }
    }
    if (n % 2 != 0)
    {
        sumser += *start;
    }
    cout << sumser << " " << sumdej;
}
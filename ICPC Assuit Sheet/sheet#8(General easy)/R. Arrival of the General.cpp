#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    cin >> arr[0];
    int min = arr[0];
    int max = arr[0];
    int minindex = 0;
    int maxindex = 0;
    for (int i =1; i <n ; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            maxindex = i;
            max = arr[i];
        }
        if (arr[i] <= min)
        {
                minindex = i;
                min = arr[i];
        }
    }
    if (max == min)
    {
        cout << 0;
    }
    else
    {
        if (minindex <= maxindex)
        {
            cout << (maxindex)+(n - minindex - 2);
        }
        else
        {
            cout << maxindex + (n - 1 - minindex);
        }
    }
    
}
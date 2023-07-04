#include<iostream>
#include<algorithm>
using namespace std;

void theShifter(long arr[], int size ,int t) {
    long temp;
    for (int j = 0; j < t; j++)
    {
        temp = arr[size - 1];
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }

}

int main()
{
    int n, t;
    cin >> n >> t;
    long* arr = new long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    t = t % n;
    theShifter(arr, n, t);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    delete[] arr;
}

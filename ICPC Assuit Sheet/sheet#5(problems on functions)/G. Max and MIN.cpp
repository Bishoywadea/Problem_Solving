#include<iostream>
#include<algorithm>
using namespace std;

void minMAx(int n) {
    long* arr = new long[n];
    cin >> arr[0];
    long min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i]>max)
        {
            max = arr[i];
        }
        else if (arr[i] < min) { min = arr[i]; }
    }

    cout << min << " " << max;
    delete[] arr;
}

int main()
{
    int n;
    cin >> n;
    minMAx(n);
    
    
}

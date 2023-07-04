#include <iostream>
using namespace std;

int main() {

    int n,count=0;
    long long min;
    cin >> n;
    long long* arr = new long long[n];
    cin >> arr[0];
    min = arr[0];
    for (size_t i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < min) { min = arr[i]; }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min) { count++; }
    }
    if (count % 2 == 0) { cout << "Unlucky"; }
    else { cout << "Lucky"; }

    delete[] arr;
}
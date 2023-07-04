#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;
    long long * arr = new long long[n];
    cin >> arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];}
    for (int i = n-1; i >=0 ; i--)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}
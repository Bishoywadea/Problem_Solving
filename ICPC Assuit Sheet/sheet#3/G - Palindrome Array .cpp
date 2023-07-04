#include <iostream>

using namespace std;

int main() {

    int n; 
    bool flag = true;
    cin >> n;
    long long * arr = new long long[n];
    cin >> arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];}
    

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - (i + 1)]) {
            flag = false;
            break;
        }
    }
    if (flag) { cout << "YES"; }
    else { cout << "NO"; }

    delete[] arr;
}
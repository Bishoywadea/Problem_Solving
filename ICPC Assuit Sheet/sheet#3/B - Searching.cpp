
#include <iostream>

using namespace std;

int main() {

    int n; long long target = 0;
    bool flag = true;
    cin >> n;
    long long* arr = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target) { cout << i; flag = false; break; }
        else {}
    }
    if (flag) { cout << "-1"; }
    delete[] arr;
}
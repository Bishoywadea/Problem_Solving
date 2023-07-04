#include <iostream>

using namespace std;

int main() {

    int n; long long sum = 0;
    cin >> n;
    long long* arr = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum >= 0) cout << sum;
    else cout << abs(sum);
    delete[] arr;
}
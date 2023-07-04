#include <iostream>

using namespace std;

int main() {

    int n; 
    int min, index;
    cin >> n;
    long long* arr = new long long[n];
    cin >> arr[0];
    min = arr[0];
    index = 1;
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min) {
            min = arr[i];
            index = i + 1;
        }
        
    }
    cout << min << " " << index;
    delete[] arr;
}
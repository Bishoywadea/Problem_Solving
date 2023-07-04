
#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;
    long long* arr = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= 10) {
            cout << "A[" << i << "] = " << arr[i]<<endl;
        }
    }
    
    delete[] arr;
}

#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;
    long long* arr = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) { cout << 1 << " "; }
        else if(arr[i]==0){ cout << 0 << " "; }
        else
        {
            cout << 2 << " ";
        }
    }
    
    delete[] arr;
}
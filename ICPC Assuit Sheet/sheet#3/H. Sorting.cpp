#include <iostream>
using namespace std;

void sorting(long long arr[],int n);

int main() {

    int n; 
    cin >> n;
    long long * arr = new long long[n];
    cin >> arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];}
    
    sorting(arr , n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

    delete[] arr;
}


void sorting(long long arr[], int n) {
    long long temp;
    for (int i = n-1; i >0 ; i--)
    {
        for (int k =0; k < n-1; k++)
        {
            if (arr[k] > arr[k + 1]) {
                temp = arr[k + 1];
                arr[k + 1] = arr[k];
                arr[k] = temp;
            }
        }
    }
}
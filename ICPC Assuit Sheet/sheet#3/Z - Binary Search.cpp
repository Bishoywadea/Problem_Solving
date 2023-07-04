#include <iostream>
#include<algorithm>
using namespace std;

int binarySearch(long long arr[], long long l, long long r, long long x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return 1;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    
    return -1;
}

int main() {
	
	long long n , q ,zero=0;
	long long target;
	cin >> n >> q;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
    sort(arr,arr+n);

    for (int i = 0; i < q; i++)
    {
        cin >> target;
        if (binarySearch(arr, 0, n - 1, target)==1) { cout << "found" << endl; }
        else
        {
            cout << "not found" << endl;
        }
    }
	delete[] arr;
}

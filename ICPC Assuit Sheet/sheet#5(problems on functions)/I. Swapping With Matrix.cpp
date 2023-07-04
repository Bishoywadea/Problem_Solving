#include<iostream>
#include<algorithm>
using namespace std;

void swapping(long arr[][500], int x, int y, int n) {
    int temp;
    for (int i = 0; i <n ; i++)
    {
        temp = arr[x][i];
        arr[x][i] = arr[y][i];
        arr[y][i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        temp = arr[i][x];
        arr[i][x] = arr[i][y];
        arr[i][y] = temp;
    }
}

int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    long arr[500][500];
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> arr[r][c];
        }
    }
    swapping(arr, x-1, y-1, n);
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cout<< arr[r][c]<<" ";
        }
        cout << endl;
    }
    
}

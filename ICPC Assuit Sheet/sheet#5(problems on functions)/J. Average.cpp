#include<iostream>
#include<iomanip>
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
    int n;
    cin >> n;
    double temp, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum = sum + temp;
    }
    temp = sum / n;
    cout << fixed << setprecision(6) << temp;
}

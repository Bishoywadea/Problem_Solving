#include<iostream>
#include<algorithm>
using namespace std;

bool convertToBinary(long long n)
{
    bool flag = true;
    bool fstrick = true;
    int strick = 0;
    int arr[1000];
    int index = 0;
    while (n != 0)
    {
        if (n % 2 == 0) {
            arr[index] = 0,
            index++;
            n = n / 2;
            if (fstrick) { strick++; }
        }
        else { arr[index] = 1, index++; n = n / 2; fstrick = false; }
    }
    for (int i = index; i < index+strick; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < index+strick; i++)
    {
        if (arr[i] == arr[index+strick - i - 1]) {}
        else { flag = false; break; }
    }
    return flag;

}

bool isodd(long long n) {
    if (n % 2 == 0) { return 0; }
    else { return 1; }
}

int main()
{
    long long n;
    cin >> n;
    if (isodd(n)) {
        if (convertToBinary(n)) { cout << "YES"; }
        else { cout << "NO"; }
    }
    else { cout << "NO"; }

}

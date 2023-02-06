#include<bits/bits-stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main() 
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << abs(v.at(0) - v.at(1))<<" ";
            cout << abs(v.at(0) - v.at(n - 1));
        }
        else if (i == n - 1)
        {
            cout << abs(v.at(n-1) - v.at(n-2)) << " ";
            cout << abs(v.at(n-1) - v.at(0));
        }
        else
        {
            cout << min(abs(v.at(i - 1) - v.at(i)), abs(v.at(i + 1) - v.at(i))) << " ";
            cout << max(abs(v.at(0) - v.at(i)), abs(v.at(n-1) - v.at(i))) << " ";
        }
        cout << endl;
    }
}
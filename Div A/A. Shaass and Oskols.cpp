#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,m,y;
    cin >> n;
    int* wires = new int[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> wires[i];
    }
    cin >> m;
    for (int i = 1; i <=m ; i++)
    {
        cin >> x >> y;
        if (x == n)
        {
            wires[x - 1] += y - 1;
            wires[x] = 0;
        }
        else if(x==1)
        {
            wires[x + 1] += wires[x]-y;
            wires[x] = 0;
        }
        else
        {
            wires[x - 1] += y - 1;
            wires[x + 1] += wires[x] - y;
            wires[x] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << *(wires + i)<<endl;
    }

}
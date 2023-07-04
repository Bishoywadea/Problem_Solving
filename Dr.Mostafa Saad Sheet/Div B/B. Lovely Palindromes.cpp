#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Fasto()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    Fasto();
    string s;
    cin >> s;
    cout << s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}


#include <iostream>
#include <string>

using namespace std;


int main(void) {
    
    char arr[1000][1000];
    string s;
    cin >> s;
    int l=0, r=0, col=0, row=0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L') { arr[row][col] = s[i]; col++; l++; }
        else if(s[i] == 'R') { arr[row][col] = s[i]; col++; r++; }
        if (r == l && r > 0) { col = 0; row++; }
    }
    cout << row<<endl;
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<1000;j++)
        {
            if (arr[i][j] == 'L' || arr[i][j] == 'R') { cout << arr[i][j]; }
            else
            {
                break;
            }
        }
        if(i==row-1){}
        else{ cout << endl; }
        
    }
}





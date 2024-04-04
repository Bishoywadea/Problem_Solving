class Solution {
public:
    int maxDepth(string s) {
        if(s=="") return 0;
        int maxDepth=0;
        int cntOpen=0;
        for( int i=0;i<s.size();i++){

            if(s[i]=='('){
                cntOpen++;
                maxDepth=max(maxDepth,cntOpen);
            }
            else if(s[i]==')') cntOpen--;
            else  continue; 
        }
       return maxDepth;
    }
};
class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int i=0;
        int ans=0;
        int t=0;
        while(i<s.size()){
            if(s[i] == '(') st.push(t+1);
            else if(s[i] == ')') ans=max(ans,st.top()),st.pop();
            if(st.size())t=st.top();
            else t=0;
            i++;
        }
        return ans;
    }
};
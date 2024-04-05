class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        int i=1;
        st.push(s[0]);
        while(i<s.size()){
            if(st.size() && abs(st.top() - s[i]) == abs('A'-'a'))
                st.pop();
            else 
                st.push(s[i]);
            i++;
        }
        s="";
        while(!st.empty())s = st.top()+s,st.pop();
        return s;
    }
};
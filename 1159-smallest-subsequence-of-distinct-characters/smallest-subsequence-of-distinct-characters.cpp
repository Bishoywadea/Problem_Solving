class Solution {
public:
    string smallestSubsequence(string s) {
        vector<bool> seen(26,0);
        vector<int> lastIndex(26);
        stack<char> st;

        for(int i=0;i<s.size();i++) lastIndex[s[i]-'a']=i;

        for(int i=0;i<s.size();i++)
            if(!seen[s[i]-'a']) {
                while(!st.empty() && lastIndex[st.top()-'a']>i && st.top()>s[i]) seen[st.top()-'a']=0, st.pop();
                st.push(s[i]);
                seen[s[i]-'a']=1;
            }

        string ans="";
        while(!st.empty()) ans+=st.top(),st.pop();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> v(128,-1);
        vector<int> vv(128,-1);
        for(int i=0;i<s.size();i++){
            if(v[t[i]]==-1) v[t[i]]=s[i];
            else if(v[t[i]] != s[i]) return 0;

            if(vv[s[i]]==-1) vv[s[i]]=t[i];
            else if(vv[s[i]] != t[i]) return 0;
        }
        return 1;
    }
};
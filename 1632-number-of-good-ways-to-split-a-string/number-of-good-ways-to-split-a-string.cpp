class Solution {
public:
    int numSplits(string s) {
        vector<int> left(26,0);
        vector<int> right(26,0);
        int disL=1;
        int ans=0;
        left[s[0]-'a']++;
        int disR=0;
        int i=1;
        while(i<s.size()){
            if(!right[s[i]-'a']) disR++;
            right[s[i]-'a']++;
            i++;
        }
        for(int l=1;l<s.size()-1;l++){
            if(disR==disL) ans++;
            right[s[l]-'a']--;
            if(!right[s[l]-'a']) disR--;
            if(left[s[l]-'a']==0) disL++;
            left[s[l]-'a']++;
        }
        if(disR==disL) ans++;
        return ans;
    }
};
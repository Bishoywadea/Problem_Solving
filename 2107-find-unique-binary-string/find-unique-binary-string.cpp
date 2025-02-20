class Solution {
public:
    unordered_set<string> s;
    string rec(string cur, int num){
        if(!num){
            if(s.find(cur) == s.end()) return cur;
            else return "";
        }

        string ans = rec(cur+"0",num-1);
        if(ans.size()) return ans;
        ans = rec(cur+"1",num-1);
        if(ans.size()) return ans;

        return "";
    }
    string findDifferentBinaryString(vector<string>& nums) {
        for(auto i:nums) s.insert(i);
        return rec("",nums.size());
        

    }
};
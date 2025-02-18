class Solution {
public:
    vector<int> rec(vector<int> cur, vector<bool> taken, string pattern, int index){
        if(index>=pattern.size()) return cur;
        int n = cur.size();
        if(pattern[index] == 'I'){
            for(int i = cur[n-1]+1 ; i<taken.size();i++){
                if(!taken[i]){
                    cur.push_back(i);
                    taken[i] = 1; 
                    vector<int> ans = rec(cur,taken, pattern, index+1);
                    if(ans.size()) return ans;
                    taken[i]=0;
                    cur.pop_back();
                }
            }
        }
        else{
            for(int i = cur[n-1]-1 ; i>=1;i--){
                if(!taken[i]){
                    cur.push_back(i);
                    taken[i] = 1; 
                    vector<int> ans = rec(cur,taken, pattern, index+1);
                    if(ans.size()) return ans;
                    taken[i]=0;
                    cur.pop_back();
                }
            }
        }
        return {};
    }
    string smallestNumber(string pattern) {
        vector<int> ans;
        vector<bool> taken(10,0);
        for(int i=1;i<=9;i++){
            taken[i]=1;
            ans = rec({i}, taken, pattern, 0);
            if(ans.size()) {
                string s = "";
                for(auto i:ans) s.push_back(i+'0');
                return s;
            }
            taken[i]=0;
        }
        return "";
    }
};
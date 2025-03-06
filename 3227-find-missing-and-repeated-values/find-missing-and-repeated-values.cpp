class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<bool> v(n*n+1,0);
        v[0]=true;
        vector<int> ans;
        for(auto i:grid){
            for(auto j:i){
                if(v[j]) ans.push_back(j);
                v[j] = true; 
            }
        }
        int index = 0;
        for(auto i:v) {if(!i) ans.push_back(index);index++;}
        return ans;
    }
};
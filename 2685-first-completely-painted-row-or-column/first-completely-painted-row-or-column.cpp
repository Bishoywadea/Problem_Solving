class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        vector<int> r(mat.size(),mat[0].size());
        vector<int> c(mat[0].size(),mat.size());

        unordered_map<int,pair<int,int>> m;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                m[mat[i][j]]={i,j};
            }    
        }
        int index=0;
        for(auto i:arr){
            pair<int,int> cor = m[i];
            r[cor.first]--;
            c[cor.second]--;
            if(!c[cor.second] || !r[cor.first])return index;
            index++;
        }
        return 0;
    }
};
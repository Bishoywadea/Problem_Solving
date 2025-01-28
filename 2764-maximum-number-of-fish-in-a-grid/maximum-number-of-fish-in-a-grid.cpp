class Solution {
    int ans=0;
    void dfs(vector<vector<int>>& g ,int r, int c, int &cur){
        int n = g.size();
        int m = g[0].size();
        if(r>=n || c>=m || r<0 || c<0 || g[r][c]==0) return;
        cur+=g[r][c];
        g[r][c] = 0;
        dfs(g,r+1,c,cur);
        dfs(g,r-1,c,cur);
        dfs(g,r,c+1,cur);
        dfs(g,r,c-1,cur);
        ans=max(ans,cur);
    }
public:
    int findMaxFish(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cur=0;
                dfs(g,i,j,cur);
            }
        }
        return ans;
    }
};
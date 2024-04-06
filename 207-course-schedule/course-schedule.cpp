class Solution {
private:
    bool dfs(vector<vector<int>>& adj, int i, vector<int>& clrs){
        if(clrs[i] == 2 || adj[i].size()==0) return 0;
        if(clrs[i] == 1) return 1;

        clrs[i]=1;

        for(auto j:adj[i])
            if(dfs(adj, j, clrs)) return 1;

        clrs[i]=2;
        return 0;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses+1);
        for(auto i:prerequisites) adj[i[1]].push_back(i[0]);
        vector<int> clrs(numCourses+1,0);
        for(int i=0;i<adj.size();i++){
            if(dfs(adj,i,clrs)) return 0;
        }
        return 1;
    }
};
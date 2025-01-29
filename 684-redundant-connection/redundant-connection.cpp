class Solution {
public:
    bool dfs(int src, int parent, vector<int> adj[], vector<bool>& vis) {
        vis[src] = true;
        for (auto adjnode : adj[src]) {
            if (!vis[adjnode]) {
                if (dfs(adjnode, src, adj, vis))
                    return true;
            } else if (adjnode != parent)
                return true;
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> adj[n + 1];
        for (int i = 0; i < n; i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            vector<bool> vis(n + 1, false);
            if (dfs(edges[i][0], -1, adj, vis)) {
                return edges[i];
            }
        }
        return {};
    }
};
class Solution {
    int ans = INT_MIN;
    vector<int> timeBob;
    
    void dfs(vector<int> &parent, vector<vector<int>> &childs, vector<int>& amount, int cur, int money, int time) {
        if(timeBob[cur] > time || timeBob[cur] == -1) money += amount[cur];
        else if(timeBob[cur] == time) money += amount[cur] / 2;

        if(childs[cur].empty()) {
            ans = max(ans, money);
            return;
        }

        for (int child : childs[cur]) {
            dfs(parent, childs, amount, child, money, time + 1);
        }
    }

public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n = amount.size();
        timeBob.assign(n, -1);

        vector<vector<int>> adj(n);
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<int> parent(n, -1);
        vector<vector<int>> childs(n);
        
        queue<int> q;
        q.push(0);
        vector<bool> visited(n, false);
        visited[0] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    parent[neighbor] = node;
                    childs[node].push_back(neighbor);
                    q.push(neighbor);
                }
            }
        }

        int t = 0, curBob = bob;
        while (curBob != -1) {
            timeBob[curBob] = t++;
            curBob = parent[curBob];
        }

        dfs(parent, childs, amount, 0, 0, 0);
        return ans;
    }
};

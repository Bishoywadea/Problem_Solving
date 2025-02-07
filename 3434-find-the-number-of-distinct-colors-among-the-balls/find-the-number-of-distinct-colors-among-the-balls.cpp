class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& q) {
        unordered_map<int, int> colors, balls;
        vector<int> res;
        int ans = 0;
        for (auto& i : q) {
            int ball = i[0];
            int color = i[1];
            if (balls.find(ball) != balls.end()) {
                int prev_color = balls[ball];
                colors[prev_color]--;
                if (colors[prev_color] == 0) ans--; 
            }
            balls[ball] = color;
            if (++colors[color] == 1) ans++; 
            res.push_back(ans);
        }
        
        return res;
    }
};

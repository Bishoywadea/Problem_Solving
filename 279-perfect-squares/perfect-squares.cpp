class Solution {
public:
    int numSquares(int n) {
        vector<int> coins;
        int i=1;
        while(i*i<=n) coins.push_back(i*i),i++;

        vector<int> dp(n+1,1e9);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            int mn=1e9;
            for(int j=0;j<coins.size();j++){
                if(i-coins[j] >= 0){
                    int recursionKaAns = dp[i - coins[j]];
                    if (recursionKaAns != 1e9) {
                        int ans = 1 + recursionKaAns;
                        mn = min(ans, mn);
                    }
                }
            }
            dp[i]=mn;
        }
        return dp[n];
    }
};
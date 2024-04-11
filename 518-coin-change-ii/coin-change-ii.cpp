class Solution {
public:
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(),coins.end());

        vector<int> dp(amount+1,0);
        dp[0]=1;

        for(int i=0;i<coins.size();i++){
            for(int j=1;j<dp.size();j++){
                if(j-coins[i] >=0) dp[j]+=dp[j-coins[i]];
            }
        }
        return dp[amount];
    }
};
class Solution {
    int rec(vector<int>& nums, int target,vector<vector<int>>& dp,int index){
        if(target==0) return 1;
        if(index == nums.size() || target<0) return 0;

        if(dp[index][target] != -1) return dp[index][target];

        int x=0;
        for(int i=0;i<nums.size();i++) x+=rec(nums,target-nums[i],dp,i);
        return dp[index][target] = x;
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
        rec(nums,target,dp,0);
        return dp[0][target];
    }
};
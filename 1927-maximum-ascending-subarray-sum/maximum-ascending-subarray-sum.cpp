class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=0;
        int cur=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) cur+=nums[i];
            else ans=max(ans,cur),cur=nums[i];
        }
        return max(ans,cur);
    }
};
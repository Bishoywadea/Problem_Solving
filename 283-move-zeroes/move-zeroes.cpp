class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0,f=1;
        if(nums.size()==1) return;
        while(s<nums.size() && nums[s]!=0) s++;
        f=s+1;
        while(s<f && f<nums.size()){
            if(nums[f] != 0) swap(nums[f],nums[s++]);
            f++;
        }
        return;
    }
};
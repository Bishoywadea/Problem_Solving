class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() <= 4) return 0;
        int o1 = nums[nums.size()-4]-nums[0]; //takes 3 elements from end
        int o2 = nums[nums.size()-3]-nums[1]; //takes 2 elements from end 1 from front
        int o3 = nums[nums.size()-2]-nums[2]; //takes 1 elements from end 2 from front
        int o4 = nums[nums.size()-1]-nums[3]; //takes 0 elements from end 3 from front

        return min(min(o1,o2),min(o3,o4));
    }
};
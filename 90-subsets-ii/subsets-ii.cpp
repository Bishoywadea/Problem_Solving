class Solution {
    void rec(vector<vector<int>>& ans, vector<int>& nums, vector<int>& ac, int index){
        ans.push_back(ac); 

        for(int i=index; i<nums.size(); i++){
            if(i>index && nums[i] == nums[i-1])continue;
            
            ac.push_back(nums[i]);
            rec(ans,nums,ac,i+1);
            ac.pop_back();
            
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        rec(ans,nums,temp,0);
        return ans;
    }
};
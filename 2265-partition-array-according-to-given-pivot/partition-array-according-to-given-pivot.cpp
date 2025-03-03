class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size(), 0);
        int left = 0, right = nums.size() - 1;
        for (int i = 0, j = nums.size() - 1; i < nums.size(); ++i, --j) {
            if (nums[i] < pivot) result[left++] = nums[i];
            if (nums[j] > pivot)result[right--] = nums[j];            
        }
        while (left <= right) result[left++] = pivot;
        return result;
    }
};
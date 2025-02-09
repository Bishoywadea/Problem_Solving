class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long total = n*(n-1)/2;

        unordered_map<long long,long long> m;
        long good=0;
        for(int i=0;i<n;i++){
            m[nums[i]-i]++;
        } 
        for(auto i:m){
            total-=(i.second*(i.second-1)/2);
        }
        return total - good;
    }
};
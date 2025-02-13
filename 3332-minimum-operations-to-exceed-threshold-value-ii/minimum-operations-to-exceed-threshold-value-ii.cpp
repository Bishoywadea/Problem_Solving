class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for(auto i:nums) q.push(i);
        int ans=0;
        while(q.top()<k){
            long long f = q.top();
            q.pop();
            long long s = q.top();
            q.pop();

            q.push(2*min(f,s) + max(f,s));
            ans++;
        }
        return ans;
    }
};
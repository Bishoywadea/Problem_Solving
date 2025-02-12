class Solution {
public:
    int sum(int n){
        int ans = 0;
        while(n>0) ans+=n%10,n/=10;
        return ans;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,priority_queue<int>> m;

        for(auto i:nums){
            m[sum(i)].push(i);
        }
        int ans=-1;
        for(auto i:m){
            if(i.second.size()>=2){
                int f = i.second.top();
                i.second.pop();
                int s = i.second.top();
                i.second.pop();
                ans=max(ans,f+s);
            }
        }
        return ans;

    }
};
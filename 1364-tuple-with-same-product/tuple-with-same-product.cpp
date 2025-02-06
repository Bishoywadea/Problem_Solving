class Solution {
    long long nCr(int n, int r) {
        if (r > n) return 0; 
        if (r > n - r) r = n - r; 

        long long result = 1;
        for (int i = 0; i < r; ++i) {
            result *= (n - i);
            result /= (i + 1);
        }
        return result;
    }
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                m[nums[j]*nums[i]]++;
            }
        }
        int ans=0;
        for(auto i:m) ans+=8*(nCr(i.second,2));
        return ans;
    }
    // 3 8 2 12
    // 4 6 2 12
    // 4 6 3 8
    // 2 6 3 4
    // 8 6 12 4

    // 6 8 12 16 24
    //     12    24 18 36
    //           24        32  48
    //                         48
};
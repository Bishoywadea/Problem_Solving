class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=0;
        int n2=0;
        for(auto i:nums1) n1^=i;
        for(auto i:nums2) n2^=i;
        return (n1*(nums2.size()%2))^(n2*(nums1.size()%2));
    }
};
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()%2==0 && nums1.size()%2==0) return 0;
        int n1=0;
        int n2=0;
        for(auto i:nums1) n1^=i;
        for(auto i:nums2) n2^=i;
        if(nums2.size()%2==0 && nums1.size()%2){
            return n2;
        }
        else if(nums2.size()%2 && nums1.size()%2==0){
            return n1;
        }
        else return n1^n2;
    }
};
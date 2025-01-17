class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        vector<int> o(d.size());
        int n=d.size();
        o[0]=0;
        for(int i=1;i<n;i++){
            if(d[i-1]==1) o[i]=!o[i-1];
            else o[i]=o[i-1];
        }
        return (o[0] ^ o[n-1] == d[n-1]);
    }
};
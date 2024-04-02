class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> pre(cardPoints.size()+1,0);
        int n = cardPoints.size();
        for(int i=0;i<n;i++) pre[i+1]=pre[i]+cardPoints[i];
        int ans=0;

        for(int i=0;i<=k;i++){
            int t=pre[i]-pre[0];
            t+=pre[n]-pre[n-k+i];
            cout<<i<<"  "<<pre[i]-pre[0]<<"   "<<pre[n]-pre[n-k+i];
            ans=max(ans,t);
        }

        return ans;
    }
};
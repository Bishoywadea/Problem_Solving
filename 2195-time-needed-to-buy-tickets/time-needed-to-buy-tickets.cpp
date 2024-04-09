class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        for(int i=0;i<tickets.size();i++){
            if(i<=k) ans+=min(tickets[i],tickets[k]);
            else {
                if(tickets[k] <= tickets[i]) ans+=tickets[k]-1;
                else ans+=tickets[i];
            }
        }
        return ans;
    }
};
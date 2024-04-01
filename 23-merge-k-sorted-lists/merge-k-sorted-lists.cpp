/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=new ListNode(0);
        ListNode* cur=ans;
        int mn;
        // bool f=1;
        while(1){
            int j=0;
            while(j<lists.size() && !lists[j]) j++;
            if(j==lists.size()) return ans->next;
            mn=j;
            // f=0;
            for(int i=j+1;i<lists.size();i++){
                // if(lists[i]) f=1;
                if(lists[i] && lists[i]->val<lists[mn]->val) mn=i;
            }
            // cout<<lists[mn]->val<< " "<<endl;
            cur->next = lists[mn];
            cur=cur->next;
            lists[mn] = lists[mn]->next;
        }
        return ans->next;
    }
};
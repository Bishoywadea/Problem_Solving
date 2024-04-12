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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        if(!head->next) return head; 
        ListNode* f=head;
        ListNode* ff=head->next;
        bool flag=1;
        while(f && ff){
            swap(f->val,ff->val);
            f=ff->next;
            if(ff->next) ff=ff->next->next;
        }
        return head;
    }
};
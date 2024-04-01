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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=n-1;
        ListNode* f=head;
        ListNode* b=head;
        for(;i>=0;i--) f=f->next;
        while(f && f->next){
            f=f->next;
            b=b->next;
        }
        if(!f) return b->next;
        else b->next=b->next->next;
        return head;
    }
};
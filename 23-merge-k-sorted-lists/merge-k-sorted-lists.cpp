class Solution {
public:
    struct compare {
        bool operator()(const ListNode* l, const ListNode* r) {
            return l->val > r->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;
        for(int i = 0; i < lists.size(); i++){
            if(lists[i])
                pq.push(lists[i]);
        }

        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        while(pq.size() > 0){
            ListNode* smallest = pq.top();
            pq.pop();
            temp->next = smallest;
            temp = temp->next;

            if(smallest->next)
                pq.push(smallest->next);
        }
        return head->next;
    }
};
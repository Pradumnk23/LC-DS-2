class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *rh=reverseList(head->next);
        ListNode *rt=head->next;
        rt->next=head;
        head->next=NULL;
        return rh;
    }
};

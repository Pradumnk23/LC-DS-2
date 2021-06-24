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
    int getDecimalValue(ListNode* head) {
        int cnt=0,s=0;
        ListNode *curr=head;
        while(curr!=NULL)
            {cnt++;curr=curr->next;}
        ListNode *temp=head;
        while((cnt-1)>=0)
        {
            s+=pow(2,cnt-1)*temp->val;
            temp=temp->next;
            cnt--;
        }
        return s;
    }
};

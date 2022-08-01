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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* ptr=head;
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* prev=dummy;
        if(head->val==val)
        {
            head=head->next;
        }
        while(ptr!=NULL)
        {
            if(ptr->val==val)
            {
             prev->next=ptr->next;
            }
            else
            {
             prev=prev->next;      
            }
           
            ptr=ptr->next;
            
        }
        return dummy->next;
    }
};
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
    
    ListNode* reverse(ListNode* root)
    {
         ListNode* temp = NULL;
        while(root!=NULL)
        {
            ListNode* next;
            next = root->next;
            root->next =temp;
            temp =root;
            root =next;
        }
        return temp;
    }
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
        
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow =slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* d = head;
        while(slow!=NULL)
        {
            if(slow->val!=d->val)
            {
                return false;
            }
            slow=slow->next;
            d=d->next;
        }
        return true;
    }
};
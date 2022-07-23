/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int countA=0,countB=0;
        
        while(tempA!=NULL)
        {
            tempA=tempA->next;
            countA++;
        }
         while(tempB!=NULL)
        {
            tempB=tempB->next;
            countB++;
        }
        tempA=headA;
        tempB=headB;
        int x = abs(countA-countB);
        if(countA>countB)
        {
            while(x!=0)
            {
                tempA=tempA->next;
                x--;
            }
        }
        else if(countB>countA)
        {
            while(x!=0)
            {
                tempB=tempB->next;
                x--;
            }
        }
        while(tempA!=tempB && tempA!=NULL && tempB!=NULL)
        {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        if(tempA==NULL && tempB==NULL)
        {
            return NULL;
        }
        return tempA;
    }
};
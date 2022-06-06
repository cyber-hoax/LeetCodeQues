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
        
        ListNode* Acurr = headA;
        ListNode* Bcurr = headB;
        
        if(Acurr == NULL || Bcurr ==NULL)
            return NULL;
          
        while(Acurr != NULL && Bcurr!= NULL && Acurr != Bcurr){
            
            
            Acurr = Acurr->next;
            Bcurr = Bcurr->next;
            
            if(Acurr  == Bcurr)
                return Acurr;
            if (Acurr == NULL) Acurr = headB;
            if (Bcurr == NULL) Bcurr = headA;
        }
        return Acurr;
    }
};
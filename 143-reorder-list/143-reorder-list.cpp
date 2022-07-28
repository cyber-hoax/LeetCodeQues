
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
    void reorderList(ListNode* head) {
        
        stack<ListNode*> pt;
        int size = 0;
        ListNode* curr = head;
        while(curr != NULL){
            pt.push(curr);
            size ++ ; 
            curr = curr->next;
        }
        
        
        ListNode* ptr = head;
        for(int i = 0 ; i < pt.size(); i++ ){
            ListNode * temp = pt.top();
            pt.pop();
            temp->next = ptr->next;
            ptr->next = temp;
            ptr =ptr->next->next;
          
        }
          ptr->next = NULL;
    }
};
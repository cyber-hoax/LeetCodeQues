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
        
        
        
        ListNode * curr = head ;
        int count = 0 ;
        ListNode * prev ; 
        
        while(curr!=NULL){
            count ++ ;
            curr = curr ->next ;
        }
        
        if(count < n || count == n){
            ListNode * temp = head;
            head = head-> next ; 
            delete temp;
            return head;
        }
        else{
            count = count - n ;
            curr = head;
            while(count > 0 ){
                prev = curr;
                curr = curr->next ;
                count -- ; 
            }
            prev->next = curr->next ;
            
            delete curr;
        }
        
        return head;
        
    }
};
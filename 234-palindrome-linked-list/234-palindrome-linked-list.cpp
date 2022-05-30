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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* curr = head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr = curr->next ; 
        }
        
       
       int flag = 0 ;
          for (int i = 0; i <=v.size()/2 && v.size() != 0; i++)
    {
        if (v[i] != v[v.size() - i - 1]) 
        {
            flag = 1;
            break;
        }
    }
       if(flag == 1)
            return false;
        else
        return true; 
    }
};
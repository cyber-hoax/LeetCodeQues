/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
    queue<Node*>q;
    q.push(root);
    Node* prev;
   
    while(!q.empty())
    {
        int size=q.size();
        bool first=true;
        for(int i=0;i<size;i++)
           {
               Node*curr=q.front(); q.pop();
               if(first)
                 { prev=curr;
                   first=false; 
                  }
                else
                 {
                  prev->next=curr;
                  prev=curr;
                 }
             
              if(curr->left) q.push(curr->left);
              if(curr->right)q.push(curr->right);
          }
    }
    return root;
        
    }
};
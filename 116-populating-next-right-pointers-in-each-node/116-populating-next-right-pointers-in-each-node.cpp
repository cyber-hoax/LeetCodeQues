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
        if(!root)
            return root;
        queue<Node *> q ;
        q.push(root);
        Node* prev ;
        while(!q.empty()){
            bool f = true;
            int size = q.size();
            for(int i = 0; i<size; i++){
                Node* node = q.front();
                q.pop();
                if(f){
                    prev= node;
                    f = false;
                }
                else{
                    prev->next = node;
                    prev = node;
                }
                if(node->left !=NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            
        }
        return root;
        
    }
};
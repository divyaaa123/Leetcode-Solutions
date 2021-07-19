/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    // Node* root=NULL;
    Node* cloneGraph(Node* node) {
    if(node==NULL)
        return NULL;
    vector<Node*> v(1000,NULL);
    return clone(node, v);
   
    }
    Node* clone(Node* node, vector<Node*> &v){
         if(node==NULL)
        return NULL;
        if(v[node->val]!=NULL){
            return v[node->val];
        }
        
         Node *root=new Node(node->val);
        v[root->val]=root;
    for(int i=0;i<node->neighbors.size();i++){
    root->neighbors.push_back(clone(node->neighbors[i],v));
    }
    return root;
    }
};
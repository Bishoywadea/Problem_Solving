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
    vector<Node* > v;
public:
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        if(node->val == 1) v.resize(101,nullptr);
        if(v[node->val]) return v[node->val];
        Node* nw = new Node(node->val);
        v[node->val] = nw;
        for(auto i:node->neighbors) nw->neighbors.push_back(cloneGraph(i));
        return nw; 
    }
};
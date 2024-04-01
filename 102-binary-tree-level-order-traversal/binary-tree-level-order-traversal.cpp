/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        if(root) q.push({root,0});
        int last=0;
        vector<int> t;
        vector<vector<int>> ans;
        while(!q.empty()){
            pair<TreeNode*,int> p = q.front();
            q.pop();
            if(p.second!=last){
                ans.push_back(t);
                t.clear();
                last++;
            }  
            t.push_back(p.first->val);
            if(p.first->left) q.push({p.first->left,p.second+1});
            if(p.first->right) q.push({p.first->right,p.second+1});
        }
        if(t.size()) ans.push_back(t);
        return ans;
    }
};
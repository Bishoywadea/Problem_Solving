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
    private:
    bool check(TreeNode *root,long min,long max)
    {
        if(root==NULL) return true;
        bool temp=false;
        if(root->val>min && root->val<max) temp=true;
        bool l=check(root->left,min,root->val);
        bool r=check(root->right,root->val,max);
        return (l&&r&&temp);
    }
public:
    bool isValidBST(TreeNode* root) { return check(root, LONG_MIN, LONG_MAX);}
};
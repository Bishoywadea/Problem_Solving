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
    
vector<int> inorderTraversal(TreeNode* root) {
	vector<int> ans;
	if (root&&root->left) {
		vector<int> temp;
		temp = inorderTraversal(root->left);
		ans.insert(ans.end(),temp.begin(),temp.end());
	}
	if(root)
		ans.push_back(root->val);
	if (root&&root->right) {
		vector<int> temp;
		temp = inorderTraversal(root->right);
		ans.insert(ans.end(),temp.begin(),temp.end());
	}
	return ans;
}
};
class Solution {
	void rec(TreeNode* root, int& index, int k, int& ans) {
		if (root->left) rec(root->left, index, k, ans);
		if (index == -1)
			index = 1;
		else 
			index++;
		if (index == k) {
			ans = root->val; return;
		}
		if (root->right) rec(root->right, index, k, ans);

	}
public:
	int kthSmallest(TreeNode* root, int k) {
		int index = -1,ans=0;
		rec(root, index, k, ans);
		return ans;
	}
};
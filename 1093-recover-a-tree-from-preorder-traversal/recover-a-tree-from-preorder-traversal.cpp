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
    int index = 0;
    TreeNode* recoverFromPreorder(string& s, int depth = 0) {
        int curDepth = 0;
        int n = s.size();
        while (index < n && s[index] == '-') {
            curDepth++;
            index++;
        }
        if (curDepth != depth) {
            index -= curDepth;
            return nullptr;
        }
        string num = "";
        while (index < n && isdigit(s[index])) {
            num += s[index++];
        }
        TreeNode* node = new TreeNode(stoi(num));
        node->left = recoverFromPreorder(s, depth + 1);
        node->right = recoverFromPreorder(s, depth + 1);
        return node;
    }
};


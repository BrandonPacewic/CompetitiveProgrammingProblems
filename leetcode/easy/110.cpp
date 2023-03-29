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
    int height(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }

        return max(1 + height(node->left), 1 + height(node->right));
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right)) {
            return true;
        } else {
            return false;
        }
    }
};

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
    bool isSymmetric(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr)) {
            return false;
        }

        if (p->val == q->val) {
            return isSymmetric(p->left, q->right) && isSymmetric(p->right, q->left);
        } else {
            return false;
        }
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return false;
        } else if (root->left == nullptr && root->right == nullptr) {
            return true;
        } else if ((root->left == nullptr && root->right != nullptr) || (root->right == nullptr && root->left != nullptr)) {
            return false;
        }

        return isSymmetric(root->left, root->right);
    }
};

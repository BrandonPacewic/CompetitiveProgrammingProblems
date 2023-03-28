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
    void traverse(vector<int>& list, TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        traverse(list, node->left);
        list.push_back(node->val);
        traverse(list, node->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> list;
        traverse(list, root);
        return list;
    }
};

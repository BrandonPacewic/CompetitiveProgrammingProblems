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
    vector<vector<int>> rootToLeafPaths(TreeNode* node, vector<int> currentPath, vector<vector<int>>& ans) {
        if (node == nullptr) {
            return ans;
        }

        currentPath.push_back(node->val);

        if (node->left == nullptr && node->right == nullptr) {
            ans.push_back(currentPath);
            return ans;
        }

        rootToLeafPaths(node->left, currentPath, ans);
        rootToLeafPaths(node->right, currentPath, ans);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }

        vector<vector<int>> paths;
        rootToLeafPaths(root, {}, paths);

        for (const auto& path : paths) {
            if (accumulate(path.begin(), path.end(), 0) == targetSum) {
                return true;
            }
        }

        return false;
    }
};

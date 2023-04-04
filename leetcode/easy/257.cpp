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
    string add_path(const vector<int>& path) {
        string ans;
        string arrow;

        for (const auto& x : path) {
            ans += arrow + to_string(x);
            arrow = "->";
        }

        return ans;
    }

    void leafPaths(TreeNode* node, vector<string>& ans, vector<int> path) {
        if (node == nullptr) {
            return;
        }

        path.push_back(node->val);

        if (node->left == nullptr && node->right == nullptr) {
            ans.push_back(add_path(path));
        } else {
            leafPaths(node->left, ans, path);
            leafPaths(node->right, ans, path);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;

        leafPaths(root, ans, {});
        return ans;
    }
};

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
    void allPaths(TreeNode* root, vector<string>& ans, string& s) {
        if (root == nullptr) return;

        int oldSize = s.size();

        s += to_string(root->val);

        if (!root->left && !root->right) {
            ans.push_back(s);
        } else {
            s += "->";
            allPaths(root->left, ans, s);
            allPaths(root->right, ans, s);
        }

        // Backtrack: restore the string to its previous state
        s.resize(oldSize);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        vector<string> ans;
        allPaths(root, ans, s);
        return ans;
    }
};
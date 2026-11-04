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
    TreeNode* helper(vector<int>& preorder, unordered_map<int, int>& mp, int& preIdx, int left, int right){
        if(left > right) return NULL;

        TreeNode* root = new TreeNode(preorder[preIdx]);

        int inIdx = mp[preorder[preIdx]];
        preIdx++;

        root->left = helper(preorder, mp, preIdx, left, inIdx-1);
        root->right = helper(preorder, mp, preIdx, inIdx+1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx = 0;
        unordered_map<int, int> mp;

        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }

        return helper(preorder, mp, preIdx, 0, inorder.size()-1);
    }
};
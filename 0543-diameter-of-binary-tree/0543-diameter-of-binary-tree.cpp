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
    int res = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        res = 0;
        calHeight(root);
        return res;
    }
    int calHeight(TreeNode* root){
        if(root == nullptr) return 0;
        int left = calHeight(root -> left);
        int right = calHeight(root -> right);
        res = max(res, left + right);
        return 1 + max(left, right);
    }
};
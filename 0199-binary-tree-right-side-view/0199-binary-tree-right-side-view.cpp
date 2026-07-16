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

    void rightview(TreeNode* root, int level, int &max_level, vector<int> &result){
        if(root == nullptr) return;

        if(max_level < level){
            result.push_back(root -> val);
            max_level = level;
        }

        rightview(root -> right, level + 1, max_level, result);
        rightview(root -> left, level + 1, max_level, result);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        int max_level = 0;
        rightview(root, 1, max_level, result);
        return result;
    }
};
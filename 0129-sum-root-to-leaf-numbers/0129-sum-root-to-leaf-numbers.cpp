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
    int number(TreeNode* root, int sum){
        if(root == nullptr){
            return 0;
        }
        sum = sum * 10 + root -> val;
        if(root -> left == nullptr && root -> right == nullptr){
            res = res + sum;
        }
        number(root -> left, sum);
        number(root -> right, sum);
        return res;
    }
    int sumNumbers(TreeNode* root) {
        number(root, 0);
        return res;
    }
};
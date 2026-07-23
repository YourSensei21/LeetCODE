/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int pVal = p -> val;
        int qVal = q -> val;

        while(root != nullptr){
            if(root -> val < pVal && root -> val < qVal){
                root = root -> right;
            }
            else if(root -> val > pVal && root -> val > qVal){
                root = root -> left;
            }
            else{
                return root;
            }
        }
        return nullptr;
    }
};
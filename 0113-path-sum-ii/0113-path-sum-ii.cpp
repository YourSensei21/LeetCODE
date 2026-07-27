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
        void findPath(TreeNode* root, int targetSum,int sum, vector<int>& diary, vector<vector<int>>& res) {
            if(root == nullptr) return;
            sum += root -> val;
            diary.push_back(root -> val);

            if(root -> left == nullptr && root -> right == nullptr){
                if(sum == targetSum){
                    res.push_back(diary);
                } 
            } else {
                    findPath(root -> left, targetSum, sum, diary, res);
                    findPath(root -> right, targetSum, sum, diary, res);
            }
            diary.pop_back();
        }
        vector<vector<int>> pathSum(TreeNode* root, int targetSum){
            vector<vector<int>> res;
            vector<int> diary;
            int sum = 0;
            findPath(root, targetSum, sum, diary, res);
            return res;
        }
    };
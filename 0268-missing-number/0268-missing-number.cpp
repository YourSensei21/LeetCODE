class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() + 1;
        int res = 0;
        vector<int> temp;
        for(int i = 0; i < n; i++){
            temp.push_back(i);
        }
        for(int i = 0; i < temp.size(); i++){
            res = res ^ temp[i];
        }
        for(int i = 0; i < nums.size(); i++){
            res = res ^ nums[i];
        }
        return res;
    }
};
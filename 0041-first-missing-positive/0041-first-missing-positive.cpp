class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()){
            if(nums[i] != i + 1 && nums[i] >= 1 && nums[i] <= nums.size()){
                int cur_idx = nums[i] - 1;
                if(nums[i] == nums[cur_idx]){
                    i++;
                } else {
                    swap(nums[i], nums[cur_idx]);
                }
            } else {
                i++;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i + 1){
                return i + 1;
            }
        }
        return nums.size() + 1;
    }
};
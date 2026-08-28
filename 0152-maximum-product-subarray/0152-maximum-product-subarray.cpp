class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i = 0;
        int finalmax = nums[i];
        int n = nums.size();
        for(i = 0; i < n; i++){
            int curr_prod = 1;
            for(int j = i; j < n; j++){
                curr_prod *= nums[j];
                finalmax = max(finalmax, curr_prod);
            }
        }
        return finalmax;
    }
};
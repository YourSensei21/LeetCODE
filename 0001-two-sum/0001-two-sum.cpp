class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> indices(n);
        for (int k = 0; k < n; ++k) {
            indices[k] = k;
        }

        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return nums[a] < nums[b];
        });
        
        int i = 0;
        int j = n - 1;
        
        while (i < j) {
            int current_sum = nums[indices[i]] + nums[indices[j]];
            
            if (current_sum == target) {
                return {indices[i], indices[j]};
            }
            else if (current_sum < target) {
                i++;
            }
            else {
                j--;
            }
        }
        
        return {};
    }
};

class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long maxi = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                long long g = gcd(nums[i], nums[j]);
                long long curr = ((long long)nums[i]*nums[j])/(g*g);
                maxi = max(maxi,curr);
            }
        }
        return maxi;
    }
};
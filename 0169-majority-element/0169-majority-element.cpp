class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        int ans = -1;
        for(int i = 0; i < n; i++){
            int element = nums[i];
            if(mp[element] > n / 2){
                ans = element;
                break;
            }
        }
        return ans;
    }
};
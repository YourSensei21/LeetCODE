class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());
        int increment = k;
        while(s.count(k)){
            k += increment;
        }
        return k;
    }
};
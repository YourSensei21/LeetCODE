class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = nums.front();
        int h = nums.back();        
        return gcd(l, h);
    }
};
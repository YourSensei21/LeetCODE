class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int maxcount = 0;
        unordered_set<int> numSet(nums.begin(), nums.end());
        for(int i : numSet){
            if(numSet.contains(i - 1)){
                continue;
            }
            long long currentNum = i;
            int currentStreak = 1;
            while(numSet.contains(currentNum + 1)){
                currentNum += 1;
                currentStreak += 1;
            }
            maxcount = max(maxcount, currentStreak);
        }
        return maxcount;
    }
};
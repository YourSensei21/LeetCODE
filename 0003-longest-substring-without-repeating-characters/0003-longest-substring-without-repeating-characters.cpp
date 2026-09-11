class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIdx(128, -1);
        
        int maxLen = 0;
        int low = 0;
        int n = s.size();
        
        for (int high = 0; high < n; high++) {
            if (lastIdx[s[high]] >= low) {
                low = lastIdx[s[high]] + 1;
            }
            
            lastIdx[s[high]] = high;
            
            maxLen = max(maxLen, high - low + 1);
        }
        
        return maxLen;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIdx(256, -1);
        int low = 0;
        int maxlen = 0;
        int n = s.size();

        for(int high = 0; high < n; high++){
            if(lastIdx[s[high]] >= low){
                low = lastIdx[s[high]] + 1;
            }
            lastIdx[s[high]] = high;
            maxlen = max(maxlen, high - low + 1);
        }
        return maxlen;
    }
};
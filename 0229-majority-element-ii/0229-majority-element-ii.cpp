class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/3;
        vector<int> res = {};
        unordered_map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto pair : mp){
            int element = pair.first;
            int freq = pair.second;

            if(freq > m){
                res.push_back(element);
            }
        }
        return res;
    }
};
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for(size_t i = 0; i < n; i++){
            int curr = arr[i];
            mp[curr]++;
        }
        int maxi = 0;
        int freq = 0;
        for(auto pair : mp){
            if(pair.second> freq){
                freq = pair.second;
                maxi = pair.first;
            }
        }
        return maxi;
    }
};
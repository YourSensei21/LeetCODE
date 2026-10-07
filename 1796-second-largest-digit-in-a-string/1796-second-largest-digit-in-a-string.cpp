class Solution {
public:
    int secondHighest(string s) {
        int first = -1;
        int second = -1;
        vector<int> nums;
        for(unsigned char c : s){
            if(isdigit(c)){
                nums.push_back(c - '0');
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > first){
                second = first;
                first = nums[i];
            }
            else if(nums[i] > second && nums[i] < first){
                second = nums[i];
            }
        }
        return second;
    }
};
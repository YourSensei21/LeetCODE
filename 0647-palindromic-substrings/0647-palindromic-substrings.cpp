class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for(int i = 0; i < n; i++){
            count = count + expand(s,i,i);
            count = count + expand(s,i,i+1);
        }
        return count;
    }
private:
    int expand(const string& s, int l, int r){
        int curr_count = 0;
        while(l >= 0 && r < s.length() && s[l] == s[r]){
            curr_count++;
            l--;
            r++;
        }
        return curr_count;
    }
};
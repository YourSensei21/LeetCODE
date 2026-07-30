class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size() - 1;
        // case 1 for escaping the empty last spaces
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        // actual counting of the elements from the last
        while(i >= 0 && s[i] != ' '){
            count++;
            i--;
        }
        return count;
    }
};
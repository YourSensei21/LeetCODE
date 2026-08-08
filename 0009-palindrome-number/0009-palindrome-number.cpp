class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0){
        return false;
       }
       long reverse = 0;
       int digit;
       int temp = x;
       while(x!=0){
        digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
       }
       if (reverse == temp){
            return true;
       }else{
        return false;
       }
    }
};
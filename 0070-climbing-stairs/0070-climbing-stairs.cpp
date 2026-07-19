class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        //I am using fibonacci sequence here
        int twostep = 1;
        int onestep = 2;
        int current = 0;
        for(int i = 3; i <= n; i++){
            current = twostep + onestep;
            twostep = onestep;
            onestep = current;
        }
        return current;
    }
};
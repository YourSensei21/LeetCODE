class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        vector<int> even;
        vector<int> odd;
        long long sumOdd = 0;
        long long sumEven = 0;
        for(int i = 0; i <= 2*n; i++){
            if(i % 2 == 0){
                even.push_back(i);
                sumEven += i;
            }
            else {
                odd.push_back(i);
                sumOdd += i;
            }
        }
        long long cd = min(sumEven, sumOdd);
        long gcd = 0;
        for(int i = 1; i <= cd; i++){
            if(sumEven % i == 0 && sumOdd % i == 0){
                gcd = i;
            }
        }
        return gcd;
    }
};
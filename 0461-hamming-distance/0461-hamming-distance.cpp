class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamming = x ^ y;
        int count = 0;
        while(hamming != 0){
            hamming = hamming & (hamming - 1);
            count++;
        }
        return count;
    }
};
class Solution {
public:
    int reverseBits(int n) {
        string bitStr = bitset<32>(n).to_string();
        
        reverse(bitStr.begin(), bitStr.end());
        
        return bitset<32>(bitStr).to_ulong();
    }
};
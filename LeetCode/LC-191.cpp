class Solution {
public:
    int hammingWeight(uint32_t n) {
       return n ? 1 + hammingWeight(n&(n-1)): 0;
    }
};

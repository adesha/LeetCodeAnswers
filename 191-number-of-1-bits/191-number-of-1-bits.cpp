class Solution {
public:
    unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
    
    int hammingWeight(uint32_t n) {
        return countSetBits(n);
    }
};
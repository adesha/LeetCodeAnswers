class Solution {
public:
    int minPartitions(string n) {
        char maxch='0';
        for(auto&x: n)
            maxch=max(maxch,x);
        return maxch-'0';
    }
};
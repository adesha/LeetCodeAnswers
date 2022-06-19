class NumArray {
private:
    vector<int> v;
public:
    NumArray(vector<int>& nums) {
        // v will contain sum of all previous elements in each index and 0 as first element
        int sum = 0;
        v.push_back(0);
        for(int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
            v.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        return v[right+1] - v[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int len = static_cast<int>(nums.size());
        vector<int> result(len, 1);
        
        for (int i = 1; i < len; ++i) {
            result[i] = result[i - 1] * nums[i - 1];
        }

        int suffix = 1;
        for (int i = len - 1; i >= 0; --i) {
            result[i] *= suffix;
            suffix *= nums[i];
        }
        return result;
    }
};

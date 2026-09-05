class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, std::size_t> num_index;
        std::size_t len = nums.size();

        num_index.reserve(len);
        for (std::size_t i = 0; i < len; ++i) {
            int num = nums[i];
            int diff = target - num;
            if (num_index.contains(diff)) {
                return {static_cast<int>(num_index[diff]), static_cast<int>(i)};
            } else {
                num_index[num] = i;
            }
        }
        return {};
    }
};

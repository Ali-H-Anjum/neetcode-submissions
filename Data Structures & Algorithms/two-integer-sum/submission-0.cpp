class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_index;
        for (std::size_t i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            int diff = target - num;
            if (num_index.contains(diff)) {
                return {num_index[diff], static_cast<int>(i)};
            } else {
                num_index[num] = i;
            }
        }
        return {};
    }
};

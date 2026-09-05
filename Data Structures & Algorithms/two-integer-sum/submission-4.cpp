class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, std::size_t> num_index;

        num_index.reserve(nums.size());
        for (std::size_t i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            int diff = target - num;

            if (num_index.find(diff) != num_index.end()) {
                return {static_cast<int>(num_index[diff]), static_cast<int>(i)};  
            } else {
                num_index[num] = i;
            }
        }
        return {};
    }
};

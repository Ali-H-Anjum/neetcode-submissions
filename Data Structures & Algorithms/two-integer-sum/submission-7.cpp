class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_index;
        num_index.reserve(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            auto it = num_index.find(target - nums[i]);
            if (it != num_index.end()) { return {it -> second, i}; }
            num_index.emplace(nums[i], i);
        }
        return {};
    }
};

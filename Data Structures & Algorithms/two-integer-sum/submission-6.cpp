class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_index;
        num_index.reserve(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            if (num_index.find(target - nums[i]) != num_index.end()) {
                return {num_index[target - nums[i]], i};  
            }
            num_index[nums[i]] = i;
        }
        return {};
    }
};

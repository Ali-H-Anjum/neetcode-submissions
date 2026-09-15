class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> lst{};
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            int left = i + 1, right = nums.size() - 1;

            if (nums[i] > 0) {
                break;
            }

            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            while (left < right) {
                int triple_sum = nums[i] + nums[left] + nums[right];

                if (triple_sum < 0) {
                    left++;
                }

                else if (0 < triple_sum) {
                    right--;
                }

                else if (0 == triple_sum) {
                    lst.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while(left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    ++left;
                    --right;
                }
            }
        }
        return lst;
    }
};

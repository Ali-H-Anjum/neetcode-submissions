class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (target != numbers[left] + numbers[right]) {
            if (numbers[left] + numbers[right] > target) {
                right--;
            }

            if (numbers[left] + numbers[right] < target) {
                left++;
            }
        }
        return {left + 1, right + 1};
    }
};

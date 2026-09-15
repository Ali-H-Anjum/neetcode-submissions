class Solution {
public:
    int maxArea(vector<int>& heights) {
        int best = 0, left = 0, right = heights.size() - 1;
        while (left < right) {
            best = max(best, ((right - left) * min(heights[right], heights[left])));
            if(heights[left] < heights[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return best;
    }
};

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1, water = 0, tmp_left, tmp_right;

        while (left < right) {
            if (height[left] < height[left + 1]) {
                left++;
            }
            else if (height[right] < height[right - 1]) {
                right--;
            }
            else if (height[left] < height[right]) {
                tmp_left = left + 1;
                while(height[tmp_left] < height[left]) {
                    water += (height[left] - height[tmp_left]);
                    tmp_left++;
                }
                left = tmp_left;
            }
            else {
                tmp_right = right - 1;
                while(height[tmp_right] < height[right]) {
                    water += (height[right] - height[tmp_right]);
                    tmp_right--;
                }
                right = tmp_right;
            }
        }
        return water;
    }
};

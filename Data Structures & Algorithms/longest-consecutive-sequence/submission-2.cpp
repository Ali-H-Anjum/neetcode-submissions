class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (const int& num : nums) {
            seen.insert(num);
        }

        int best = 0;

        for (const int& num : seen) { 
            if (!seen.contains(num - 1)) {
                int len = 1;
                while (seen.contains(num + len)) {
                    len++;
                }
                best = std::max(best, len);
            }
        }
        return best;
    }
};

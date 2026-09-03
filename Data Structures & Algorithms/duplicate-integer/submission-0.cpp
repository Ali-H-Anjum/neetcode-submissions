class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> checked;
        for (int n : nums) {
            if (checked.contains(n)) {
                return true;
            }
            checked.insert(n);
        }
        return false;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> signatures;
        vector<vector<string>> anagrams;

        for (const string& str : strs) {
            string signature = str;
            sort(signature.begin(), signature.end());
            signatures[signature].push_back(str);
        }

        for (auto& [signature, words] : signatures) {
            anagrams.push_back(move(words));
        }
        return anagrams;
    }
};

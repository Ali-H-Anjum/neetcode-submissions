class Solution {
public:

    string encode(vector<string>& strs) {
        string hidden;

        for (const auto& str : strs) {
            hidden.append(to_string(str.size())).append(":").append(str);
        }

         return hidden;
    }

    vector<string> decode(string s) {
        vector<string> visible;
        int delim_pos, length;
        for (int i = 0; i < s.size(); i = delim_pos + 1 + length) {
            delim_pos = s.find(':', i);
            length = stoi(s.substr(i, delim_pos - i));
            string str = s.substr(delim_pos + 1, length);
            visible.push_back(str);
        }
        return visible;
    }
};

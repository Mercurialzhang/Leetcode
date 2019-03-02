class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if(s.length() == 0 || words.size() == 0) {
            return res;
        }
        int lenght_window = int(words.size()) * int(words[0].length());
        map<string, int> word_map;
        for (int i = 0; i < words.size(); i ++) {
            word_map[words[i]] += 1;
        }

        for (int i = 0; i <= int(s.length()) - lenght_window + 1; i ++) {
            map<string, int> string_map;
            int j;
            for (j = i; j < lenght_window + i; j += words[0].length()) {
                string temp = s.substr(j, words[0].length());
                string_map[temp] += 1;
                if (string_map[temp] > word_map[temp]) {
                    string_map.clear();
                    break;
                }
            }
            if (j == lenght_window + i) {
                res.emplace_back(i);
            }
        }
        return res;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        char temp;
        int pointer = 0;
        int breakOut = 1;
        if (strs.size() == 0) {
            return result;
        } else if (strs.size() == 1) {
            return strs[0];
        } else {
            while (breakOut) {
                for (vector<string>::iterator it = strs.begin(); it != strs.end(); it ++) {
                    if (*it != "") {
                        if(it == strs.begin()) {
                            if(pointer < (*it).length()){
                                temp = (*it)[pointer];
                            } else {
                                breakOut = 0;
                                break;
                            }
                        } else {
                            if (pointer < (*it).length()) {
                                if ((*it)[pointer] != temp) {
                                    breakOut = 0;
                                    break;
                                }
                            } else {
                                breakOut = 0;
                                break;
                            }
                        }
                    } else {
                        breakOut = 0;
                        break;
                    }
                }
                if (breakOut != 0) {
                    result += temp;
                    pointer ++;
                }
            }
            return result;
        }
    }
};

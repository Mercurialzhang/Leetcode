class Solution {
public:
    bool isNumber(string s) {
        auto pos=  s.find_first_not_of(' ');
        if (pos ==s.length()) return false;
        if (s[pos] == '-' || s[pos] == '+') pos++;
        if (pos == s.length()) return true;
        int num_of_digits = 0;
        for(;isdigit (s[pos]); pos++, num_of_digits++) ;
        if (pos == s.length()) return true;
        if (s[pos] == '.') {
            for(++pos;isdigit (s[pos]); pos++, num_of_digits++) ;
        }
        if (num_of_digits == 0) return false;
        if (s[pos] == 'e') {
            if (++pos == s.length()) return false;
            if (s[pos] == '-' || s[pos] == '+') pos++;
            const   int  prev = pos;
            while( isdigit (s[pos])) pos++;
            if (pos == prev) return false;
        }
        return s.find_first_not_of(' ',pos)==string::npos;
    }
};
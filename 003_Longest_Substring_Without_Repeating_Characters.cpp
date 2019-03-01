class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector <char> character;
    vector<char>::iterator it;
    int max = 0;
    for(int i = 0; i < s.length(); i ++) {
        it = find(character.begin(),character.end(),s[i]);
        if(it == character.end()) {
            character.push_back(s[i]);
//            cout << 1 << " ";
//            for(int j = 0; j < character.size(); j ++) {
//                cout << character[j] << " ";
//            }
//            cout << endl;
        } else {
            vector <char>::iterator location;
            location = character.begin();
            //cout << *location;
            while(location != it) {
                character.erase(location);
                location = character.begin();
                it = find(character.begin(),character.end(),s[i]);
            }
            character.erase(location);
            character.push_back(s[i]);
            //cout << 2 << " ";
//            for(int j = 0; j < character.size(); j ++) {
//                cout << character[j] << " ";
//            }
            //cout << endl;
        }
        if(character.size() > max) {
            max = character.size();
        }
    }
    return max;
}
};

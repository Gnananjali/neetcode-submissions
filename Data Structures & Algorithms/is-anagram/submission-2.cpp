class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>s1, t1;
        if(s.size() != t.size()) return false;
        for(char i : s){
            s1[i]++;
        }
        for(char j : t){
            t1[j]++;
        }
        return s1 == t1;
    }
};

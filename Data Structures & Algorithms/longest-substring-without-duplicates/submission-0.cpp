class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ch;
        int i=0,maxLen = 0;

        for(int j=0;j<s.size();j++){
            while(ch.count(s[j])){
                ch.erase(s[i]);
                i++;
            }
            ch.insert(s[j]);
            maxLen = max(maxLen, (int)ch.size());
        }
        return maxLen;
    }
};

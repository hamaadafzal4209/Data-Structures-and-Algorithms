class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss = s + s;
        string modifiedSS = ss.substr(1, ss.size() - 2);
        return modifiedSS.find(s) != string::npos;
    }
};
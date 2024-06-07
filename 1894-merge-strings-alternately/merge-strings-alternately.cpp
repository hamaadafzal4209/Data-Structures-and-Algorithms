class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergeString;
        int i = 0, j = 0;
        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size())
                mergeString += word1[i++];
            if (j < word2.size())
                mergeString += word2[j++];
        }
        return mergeString;
    }
};
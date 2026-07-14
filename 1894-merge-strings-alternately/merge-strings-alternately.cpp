class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        merged.reserve(word1.length() + word2.length());
        
        // Loop up to the length of the longer string
        for (int i = 0; i < max(word1.length(), word2.length()); ++i) {
            if (i < word1.length()) merged += word1[i];
            if (i < word2.length()) merged += word2[i];
        }
        
        return merged;
    }
};
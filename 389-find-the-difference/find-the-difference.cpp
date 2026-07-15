class Solution {
public:
    char findTheDifference(string s, string t) {
        int total = 0;
        
        
        for (char letter : t) {
            total += letter;
        }
        
        
        for (char letter : s) {
            total -= letter;
        }
        
        
        return total;
    }
};
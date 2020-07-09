class Solution {
public:
    void reverseString(vector<char>& s) {
        int startIndex = 0;
        int endIndex = s.size() - 1;
        
        while (startIndex <= endIndex) {
            char temp = s[startIndex];
            
            s[startIndex] = s[endIndex];
            s[endIndex] = temp;
            startIndex++;
            endIndex--;
        }
    }
};

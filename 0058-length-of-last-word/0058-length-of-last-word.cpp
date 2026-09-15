class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool c = true;
        int i = s.length() - 1;
        
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        for (int j = i; j >= 0 && c == true; j--) {
            if (s[j] == ' ') {
                c = false;
            }
            else {
                len++;
            }
        }
        return len;
    }
};
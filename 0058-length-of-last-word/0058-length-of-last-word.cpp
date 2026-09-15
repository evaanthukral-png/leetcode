class Solution {
public:
    int lengthOfLastWord(string s) {
        bool c = true;
        int len = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ' && c == true) {
                continue;
            }
            if (s[i] != ' ') {
                c = false;
                len++;
            }
            if (s[i] == ' ' && c == false) {
                break;
            }
        }
        return len;
    }
    
};
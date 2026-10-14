class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                ans += tolower(s[i]);
            }
        }

        string backward = "";

        for (int i = ans.size() - 1; i >= 0; i--) {
            backward += ans[i];
        }
        if (ans == backward) {
            return true;
        }
        else {
            return false;
        }
    }
};
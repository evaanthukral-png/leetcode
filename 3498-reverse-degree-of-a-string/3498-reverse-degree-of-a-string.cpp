class Solution {

public:

    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int alphabet = (s[i] - 'a');
            int rev_pos = 26 - alphabet;
            int str_pos = i + 1;
            sum = sum + (rev_pos * str_pos);
        }
        return sum;
    }
};
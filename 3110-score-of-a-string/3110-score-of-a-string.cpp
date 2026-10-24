class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i =0;i<s.length()-1;i++){
            int diff = s[i] - s[i + 1];
            if (diff< 0) {
            diff = -diff;
            }
            sum = sum + diff;
        }
       
        return sum;
    }
    
};
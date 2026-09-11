class Solution {
public:
    bool isPalindrome(int x) {
        int z = x;
        long y = 0;
        if (x<0){
            return false;
        }
        else{
            for (int num = z ; num != 0; num = num / 10)
            {
                int rem = num % 10;
                
                y = (y * 10 + rem);
            }
            if (x == y){
                return true;
            }
            else{
                return false;
            }
        }
        
    }
};
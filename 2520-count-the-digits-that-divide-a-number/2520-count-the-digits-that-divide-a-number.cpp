class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count = 0;

        for(int i =n;i>0;i=i/10) {
            int j = i%10;
            if(num % j == 0) {
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};
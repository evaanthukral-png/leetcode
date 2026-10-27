class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        for(int i =n;i > 0;i=i/10){
            int num = i%10;
            sum = sum + num;
        }
        return sum;
    }
};
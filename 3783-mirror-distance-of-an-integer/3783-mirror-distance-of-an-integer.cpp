class Solution {
public:
    int mirrorDistance(int n) {
        int reverse=0;
       for(int i =n;i>0;i=i/10){
        int a = i % 10;
        reverse = reverse * 10 + a;
       }
       int result = abs(n-reverse);
       return result;
    }
};
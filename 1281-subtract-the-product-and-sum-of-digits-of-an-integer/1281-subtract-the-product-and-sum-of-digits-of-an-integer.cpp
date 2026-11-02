class Solution {
public:
    int subtractProductAndSum(int n) {
        int multi = 1;
        int add =0;
        for(int i =n;i>0;i=i/10){
            multi = multi*(i%10);
            add = add + (i%10);
        }
        return multi - add;
    }
};
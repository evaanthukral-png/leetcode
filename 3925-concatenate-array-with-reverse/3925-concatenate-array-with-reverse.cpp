class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int a = nums.size();
        vector<int> num(a*2);
        for(int i = 0;i<a;i++){
            num[i] = nums[i];
            num[a+i] = nums[a-1-i];
        }
        return num;
    }
};
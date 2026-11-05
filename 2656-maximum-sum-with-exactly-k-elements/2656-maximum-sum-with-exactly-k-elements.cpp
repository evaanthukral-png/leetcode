class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum =0;
        int max =0;
         for (int i = 0; i < nums.size(); i++) {
            if (nums[i]>max) {
                max = nums[i];
            }
        }
        for (int i = 0; i < k; i++) {
            sum = sum + max;
            max =max+1;
        }
        return sum;
    }
};
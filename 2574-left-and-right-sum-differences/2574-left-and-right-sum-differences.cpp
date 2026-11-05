class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans(n);
        left[0] = 0;
        right[n-1] =0;
        for(int i =1;i<n;i++){
            left[i] = left[i-1] + nums[i-1];
            right[n-i-1] = right[n-i] + nums[n-i];
        }
        for(int j=0;j<n;j++){
            ans[j] = abs(right[j] - left[j]);
        }
        return ans;
    }
};
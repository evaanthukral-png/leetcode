class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        for(int i =1 ; i<nums.size();i++){
            if(nums[i] < min){
                min = nums[i];
            }
            if(nums[i]>max){
                max = nums[i];
            }
        }
         vector<int> ans(max - min);
        int k = 0;
        for (int j = min + 1; j < max; j++) {
            int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == j) {
                count++;
            }
        }
        if (count == 0) {
            ans[k] = j;
            k++;
        }
        }
        ans.resize(k);
        return ans;
    }
};
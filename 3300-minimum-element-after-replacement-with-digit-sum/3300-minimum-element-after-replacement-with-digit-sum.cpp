class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        for(int i =0;i<n;i++){
            int sum = 0;
            for (int j=nums[i]; j > 0; j = j / 10) {
                sum += j % 10;
            }
            arr[i] = sum;
        }
        int min = arr[0];
        for(int k=1;k<n;k++){
            if(arr[k]<min){
                min = arr[k];
            }
        }
        return min;
    }
};
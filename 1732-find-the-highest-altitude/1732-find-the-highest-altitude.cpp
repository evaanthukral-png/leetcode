class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> arr(gain.size()+1);
        arr[0] =0;
        for(int j =1;j<=gain.size();j++){
            arr[j] = arr[j-1] + gain[j-1];
        }
        int max =arr[0];
        for(int i =0;i<arr.size();i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};
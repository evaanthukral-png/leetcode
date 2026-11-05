class Solution {
public:
    int largestInteger(int num) {
        int arr[100];
        int n = 0;
        int temp = num;

        for(int i=temp; i >0; i = i/10) {
            arr[n] = i % 10;
            n++;
        }
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] % 2 == arr[j] % 2 && arr[i] > arr[j]) {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
        int ans =0;
        for(int i = n-1; i >= 0; i--) {
            ans = ans * 10 + arr[i];
        }   
        return ans;
    }
};

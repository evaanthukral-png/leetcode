class Solution {
public:
    int minimizedStringLength(string s) {
        int arr[26] ={};
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            int ascii= s[i] - 'a';
            if(arr[ascii] == 0){
                arr[ascii] = 1;
                count++;
            }
        }
        return count;
    }
};
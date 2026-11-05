class Solution {
public:
    char repeatedCharacter(string s) {
        int arr[26] ={};
        for(int i=0;i<s.size();i++){
            int ascii =0;
            ascii = s[i] - 'a';
            arr[ascii] = arr[ascii] +1;

            if(arr[ascii] >=2){
                return s[i];
            }
        }
        return ' ';
    }
};
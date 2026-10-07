class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()) {
            return -1;
        }
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            
            int fg =0;
            int j;
            
            for (j = 0; j < needle.size(); j++) {
                if (needle[j] == haystack[i+j]){
                    fg++;
                }
                else{
                    break;
                }
            }
            if (fg == needle.size()){
                return i;
            }
        }
        return -1;
        }
};
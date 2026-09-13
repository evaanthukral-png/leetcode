class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        
        for (int i = 0; i < strs[0].size(); i++){
            int fg = 0;
            for(int j = 0;j<strs.size();j++){
                if(strs[0][i] == strs[j][i]){
                    fg+=1;
                }
                else{
                    return str;
                }
            }
            if (fg == strs.size()){
                str += strs[0][i];
            }
        }
        return str;
    }
};
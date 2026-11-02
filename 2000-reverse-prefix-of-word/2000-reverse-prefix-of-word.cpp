class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = word;
        for(int i =0;i<word.size();i++){
            if(ch == word[i]){
                for(int j=0;j<=i;j++){
                    ans[j] = word[i-j];
                }
                return ans;
            }
        }
        return ans;
    }
};
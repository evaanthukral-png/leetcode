class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string check;
        check.resize(words.size());
        for(int i =0;i<words.size();i++){
            check[i] = words[i][0];
        }
        if(check == s){
            return true;
        }
        return false;
    }
};
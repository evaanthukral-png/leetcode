class Solution {
public:
    int countAsterisks(string s) {
        int count =0;
        int c =0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '|'){
                count++;
            }
            if(s[i] == '*' && count%2 == 0){
                c++;
            }
        }
        return c;
    }
};
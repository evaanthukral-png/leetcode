class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count =0;
        for(int i =0;i<details.size();i++){
            int age =0;
            for(int j =11;j<13;j++){
                age = age*10 + (details[i][j]-'0');
            }
            if(age>60){
                count++;
            }
        }
        return count;
    }
};